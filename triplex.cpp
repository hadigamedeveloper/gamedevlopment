#include <iostream>

void PrintIntroduction(int Difficulty)
{
    //print the welcome and intro message to tripleX game
    std::cout << "____________  __________  _______    __________  ___             __________  (|)         (|)         \n";
    std::cout << "|__=====___/  [=========)   [=]      [========]  [=]             [========]   ( )       ( )         \n";
    std::cout << "   [===]      [==[__]===)   [=]      [==[__]==]  [=]             [========]    ( )     ( )           \n";
    std::cout << "   [===]      [=====____)   [=]      [========]  [=]             [==]           ) (__)  (           \n";
    std::cout << "   [===]      [=]^ (        [=]      [=]______]  [=]             [========]     |   ==  |          \n";
    std::cout << "   [===]      [=] ^ ^       [=]      [=]         [=]             [========]     |   __  |         \n";
    std::cout << "   [===]      [=]  ^ ^      [=]      [=]         [=]             [==]           |  (  ) |          \n";
    std::cout << "   )===(_     )=(   ^ ^__   [=]      )=(         [=(__________   [========]    /   |  | |__        \n";
    std::cout << "  /______|   /___|   ^__/ __[=]__   /___|        (============)  [========]   /____|  |____|         \n\n";
    std::cout << "                                                                                                        \n";
    std::cout << "    __________________________________________________________________________________________________      \n";
    std::cout << "   (010010101                      ________________________________0100                               )      \n";
    std::cout << "   |  010010010                    0                              0  010010                           |    \n";
    std::cout << "   |    01001011                  0                                0    010010                        |   \n";
    std::cout << "   |       01001010              0                                  0      010010                     |    \n";
    std::cout << "   |          01001010          0                                    0        01001110                |   \n";
    std::cout << "   |             0100101001010 0                                      0        0100101010101010011    |    \n";
    std::cout << "   |__________________________0                                        0______________________________|           \n";
    std::cout << "____________________________________________________________________________________________________________________________________ \n";
    std::cout << "HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN::HACKERMAN:: \n\n";

    std::cout << "\n\nyou are a professional hacker breaking into server " << Difficulty;
    std::cout << "  ||there are 10 servers in an room enter the correct pin to destroy the complete server room \n";
    std::cout << "if you sucessfully destroy server room you win \n";
    std::cout << "you receice reward of $1000 on every level......\n\n";
}

bool PlayGame(int Difficulty)
{

   PrintIntroduction(Difficulty);
   
   
    //declaring 3 number code need to destroy server  
   const int CodeA = rand();
   const int CodeB = rand();
   const int CodeC = rand();

    //sum and product
   const int CodeSum = CodeA + CodeB + CodeC;
   const int CodeProduct = CodeA * CodeB * CodeC;

    //it is at the initialising stage sum and product to terminal for printing
    
    std::cout << "*there are 3 numbers in the code ";
    std::cout << "\n*the code will be add up to: " << CodeSum; 
    std::cout << "\n*the product of the code is: " << CodeProduct;  

    //store playerguess
    std::cout << std::endl;
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC; 
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //check player guess
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\ncongrats $1000 cr. in your bank balance  ";
        return true;
    }
    else
    {
        std::cout << "\nTRY AGAIN***ERROR**CODE*** stupid you have entered wrong code  ";
        return false; 
    }    
}

int main()
{
    int LevelDifficulty = 1;
    int const MaxDifficulty = 10; 

    while (LevelDifficulty <= MaxDifficulty) // Loop the game until all level are completed
    {
      bool bLevelComplete = PlayGame(LevelDifficulty);              
      std::cin.clear(); // Clears an errors
      std::cin.ignore(); // Discard the buffer

      if (bLevelComplete) 
      {
        ++LevelDifficulty;     
          
      }
      

    }
    std::cout << "\n\nGreat work HACKERMAN. cograts you have sucseefully corupted and destroyed all 10 servers \nstd::cout  |||Sir,you have $10,000 in your bank ******press**to**continue*****";
    return 0;  
}