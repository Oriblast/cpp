#include "BitcoinExchange.hpp"

bool DateValide(const std::string& dateStr) {
    std::regex modeleDate("\\d{4}-\\d{2}-\\d{2}");

    // Vérifier la correspondance
    if (!std::regex_match(dateStr, modeleDate)) {
        return false;
    }
    // Vérifier la validité des composants de la date
    std::istringstream ss(dateStr);
    int annee, mois, jour;
    char delim;
    ss >> annee >> delim >> mois >> delim >> jour;
    if (ss.fail() || ss.bad() || ss.eof() || delim != '-' ||
        annee < 0 || mois < 1 || mois > 12 || jour < 1 || jour > 31) {
        return false;
    }
    // Vérifier les mois avec 30 jours
    if ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && jour > 30) {
        return false;
    }
    if (mois == 2) {
        // Année bissextile
        bool anneeBissextile = (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
        if ((anneeBissextile && jour > 29) || (!anneeBissextile && jour > 28)) {
            return false;
        }
    }
    return true;
}

size_t conv(size_t k)
{
    size_t l = 10;

    while (k != 0)
    {
        l *= 10;
        k--;
    }
    return l;
}

double extracte(std::string line)
{
    int i = 0;
    double j = 0;
    double virgule = 0.0;
    double vig = 0.0;
    int k = 0;
       while (line[i] != 0)
       {
            j = j * 10 + line[i] - '0';
            i++;
            if (line[i] == '.')
            {
                i++;
                while (line[i] != 0)
                {
                    vig = line[i] - '0';
                    vig /= conv(k);
                    virgule = virgule + vig;
                    i++;
                    k++;
                }
                j = j + virgule;
            }
       }
       return j;
}

BitcoinExchange::BitcoinExchange() {
    std::string line;
    size_t pos = line.find(',');
    std::ifstream  val("data.csv");
    while (std::getline(val, line))
    {
        pos = line.find(',');
        _graph[line.substr(0, pos)] = extracte(line.substr(pos + 1));
       //std::cout << _graph[line.substr(0, pos)] << line.substr(0, pos) << std::endl;
    }

}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &bitcoinExchange) {

}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &bitcoinExchange) {
    *this = bitcoinExchange;
    return (*this);
}

BitcoinExchange::BitcoinExchange(std::string bitcoinExchange) : _lec(bitcoinExchange) {
   std::string line;
    size_t pos = line.find(',');
    std::ifstream  val("data.csv");
    while (std::getline(val, line))
    {
        pos = line.find(',');
        _graph[line.substr(0, pos)] = extracte(line.substr(pos + 1));
       //std::cout << _graph[line.substr(0, pos)] << line.substr(0, pos) << std::endl;
    }
}

void BitcoinExchange::execut() 
{
    std::ifstream lec(_lec); 
    if (lec.is_open())
    {
        std::string line;
        size_t pos = line.find(' ');
        std::map<std::string, double>::iterator it = _graph.begin();
        for (int i = 0; i < 200; it++)
            i++;
        while (std::getline(lec, line))
        {
            pos = line.find(' ');
            if (DateValide(line.substr(0, pos)) == false && (extracte(line.substr(pos + 3)) <= 1000) && extracte(line.substr(pos + 3)) >= 0)
            {
                if (_graph.find(line.substr(0, pos)) != _graph.end())
                    std::cout << line.substr(0, pos) << " => " << _graph[line.substr(0, pos)] * extracte(line.substr(pos + 3)) << std::endl;
                else
                    std::cout << line.substr(0, pos) << " => " << it->second * extracte(line.substr(pos + 3)) << std::endl;
            }
            else
            {
                if (DateValide(line.substr(0, pos)) == true)
                    std::cout << "Erreur : mauvaise entree => " << line.substr(0, pos) << std::endl;
                else if (extracte(line.substr(pos + 3)) > 1000)
                    std::cout << "erreur : nombre trop grand => " << std::endl;
                else if (extracte(line.substr(pos + 3)) < 0)
                    std::cout << "Erreur : nombre non positif => " << std::endl;
            }
        }
    }
}