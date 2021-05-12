#include <iostream>
#include <vector>

using namespace std;
/**
 * Parte 1: Vettori di base
 *
 * Idea personale: come un array! Quindi mi aspetto ci siano
 * metodi e funzioni come `push` e `sort`, anche se so per
 * esperienza personale che si usa `std::sort()`
 *
 * Scriviamo un semplicissimo vettore e iniziamo a capire anche
 * come si usano anche le struct, personalmente credo siano quasi
 * identiche alle typedef classiche che si fanno in TypeScript.
 *
 * Proviamo, Lessgo!
 */

struct person
{
  int id;
  string name;
};

int main()
{
  vector<person> people;
  vector<person> example_people = {
      {1,
       "Fabrizio"},
      {2,
       "Pippo"}};

  for (auto &person : example_people)
  {
    people.push_back(person);
  }

  for (auto &person : people)
  {
    cout << "Nome Persona con id: " << person.id << " : " << person.name << endl;
  }
}