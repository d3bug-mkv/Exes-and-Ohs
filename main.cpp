/*Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false

Etapes: 

1 -> Si la string est pas vide, for based loop pour lire chaque char de la string.
2 -> Si x ou X et o ou O incrementer variable int "sum_x" et "sum_o"
3 -> Si sum_x == sum_o return True. 


Fait le 13/09/2025.

*/


#include <iostream>

int main() {
    
    //A modifier
    const std::string str {"test_xXoOx_test"};

    //Variable
    int sum_x {0};
    int sum_o {0};

    //Lire chaque char de str et incrementer si x(X) ou o(O) trouvé.
    for (int i = 0; i < str.size(); ++i){
        if (str[i] == 'X' || str[i] == 'x'){
            sum_x += 1;
        }
        if (str[i] == 'O' || str[i] == 'o'){
            sum_o += 1;
        }
    }

    //Retourne true si on a le meme nombres de x(X) et de o(O).
    if (sum_x == sum_o)
        std::cout << "TRUE (x = "<< sum_x << " o = " << sum_o << ")" << std::endl;
    else
        std::cout << "FALSE (x = "<< sum_x << " o = " << sum_o << ")" << std::endl;



    return 0;
}