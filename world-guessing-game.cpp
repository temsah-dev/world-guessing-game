//==============================
//==============================
/**/   #include <iostream>  //##
/**/   #include <string>    //##
/**/   #include <ctime>     //##
/**/   #include <random>    //##
/**/   #include <cctype>    //##
/**/   #include <algorithm> //##
/**/   using namespace std; //##
//==============================
//==============================

int rank = 0 ;
int life = 5 ;//ثابت المحاولات
int help = 0 ;
int level4_Open = 0 ;
int level5_Open = 0 ;

int randomw()
{
  return rand() % 21;
}


//============= level 1 💯 =======================
                                             //###
void level1();                               //###
                                             //###
//============= level 2 💯 =======================
                                             //###
void level2();                               //###
                                             //###                        
//============= level 3 💯 =======================
                                             //###
void level3();                               //###
                                             //###
//============= level 4 💯 =======================
                                             //###
void level4();                               //###
                                             //###                     
//============= level 5 💯 =======================
                                             //###
void level5();                               //###
                                             //###                                                                                         
//========= Devil Room 👹☠  =====================
                                             //###
void Devil_Room();                           //###
                                             //###
//============= Shop   ===========================
                                             //###
void Shop();                                 //###
                                             //###
//============= Choose_The_Stage 💯 ==============
                                             //###
void Choose_The_Stage();                     //###
                                             //###
//============= Start menu 💯 ====================
                                             //###
void tetutorial();                           //###
                                             //###
//===========================================================================================================================================================================





int main()
{
   srand(time(0));
   ::rank = 1 ;
   tetutorial();
    return 0;
}


//============================================================================== Start menu 💯 ==============================================================================

void tetutorial(){
 
  string Settings;
  
  if( ::rank<=0 ){
   cout <<"\nIt seems that you are falling, so I will make your score = 1\n";
   ::rank=1;
  }
  cout << "\nYour points = " << ::rank ;
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout << "\t\t\t\t\t\t\t  Enter the number next to the task you want \n\n";
  cout << "\t\t\t\t\t\t\t\t   Welcome to Gussing Game\n";
  cout << "\t\t\t\t\t\t\t\t        Start -[1] \t\t" << endl;
  cout << "\t\t\t\t\t\t\t\t         Shop-[2]  \t\t" << endl;
  cout << "\t\t\t\t\t\t\t\t    Choose the stage-[3] \t\t \n";
  
  cin >> Settings;
  //system("cls");
  system("clear" ) ;//for mobile
  
  if(Settings=="Temsa7"){
    cout <<"Hi Eng.Ismail\n";
    ::rank=9999;
    tetutorial();
  }else{
  
    if( Settings == "1" ){
      level1();
    } else if( Settings == "2" ){
      Shop();
      tetutorial();
    } else if( Settings == "3" ){ 
     Choose_The_Stage();
     tetutorial();
    } else {
     tetutorial();
    }
  }
}


//============================================================================== Choose_The_Stage 💯 ==============================================================================


void Choose_The_Stage(){

    string Choose_The_Stagee;
    cout << "\n\n\n\t\t\t  Choose the stage you want to play \n\n";
    cout << " \t\t\t  level 1 \"   Fruit level    \"  (1)\n";
    cout << " \t\t\t  level 2 \"  Country level   \"  (2)\n";
    cout << " \t\t\t  level 3 \" football players \"  (3)\n";
    cout << " \t\t\t  level 4 \"   Famous foods   \"  (4)";
    if( level4_Open == 1 ){
    cout <<"  [open]\n";
    }else if( level4_Open == 0 ){
    cout <<"  [closed]\n";
    }
    cout << " \t\t\t  level 5 \"   Sphinx level   \"  (5)";
    if( level5_Open == 1 ){
    cout <<"  [open]\n";
    }else if( level5_Open == 0 ){
    cout <<"  [closed]\n";
    }
    
    cout << "\n\n Enter any other number to return to the main menu ";
       cin >> Choose_The_Stagee ;
        //system("cls");
       system("clear" ) ;//for mobile 
       
    if( Choose_The_Stagee == "1" ){
     level1();//Fruit level
     }else if ( Choose_The_Stagee == "2" ){
     level2();//Country level
     }else if ( Choose_The_Stagee == "3" ){
     level3();//Famous food of the word 
     tetutorial();
     }else if ( Choose_The_Stagee == "4" ){
     
       if( level4_Open == 1){
        level4();
        tetutorial();
       }else if( level4_Open == 0 ){
       
        //system("cls");
        system("clear" ) ;//for mobile
        cout << "\nYou must purchase the level first \n\n";
        Choose_The_Stage();
        
       }
     
     }else if ( Choose_The_Stagee == "5" ){
     
       if( level5_Open == 1){
       
        level5();
        tetutorial();
        
       }else if( level5_Open == 0 ){
       
        //system("cls");
        system("clear" ) ;//for mobile
        cout << "\nYou must purchase the level first \n\n";
        Choose_The_Stage();
        
       }
     
     }else{
     tetutorial();
     }
     
     
 }



//============================================================================== Shop 💯 ==============================================================================

void Shop(){
 
   
     //system("cls");
     //system("clear" ) ;//for mobile
     string choice;
     cout << "\n============================= Shop =================================\n";
    cout << "\n\n\t\t level 4 \" Famous foods \" [1]\n\t\t    Level price 20 point\n";
    if( level4_Open == 1 ){
    cout <<"\t\tYou have already purchased it💯\n";
    }
    cout << "\n\n\t\t level 5 \" Sphinx level \" [2]\n\t\t    Level price 30 point\n";
    if( level5_Open == 1 ){
    cout <<"\t\tYou have already purchased it💯\n";
    }
    
    cout <<"\n\n\t     To return to the main menu, press [3]\n\n";
    cout << "\n====================================================================\n";
    
    cin >> choice;
    if( choice == "1" ){
  
       if( level4_Open == 1 ){
        //system("cls");
        system("clear" ) ;//for mobile
        cout <<"\tThis level is already with you \n";
        Shop();
       }else if( ::rank >= 20 ){
     
       level4_Open = 1 ;
        ::rank-=20;
        //system("cls");
        system("clear" ) ;//for mobile
        cout << "\nCongratulations, you have achieved level 4 \n";
        Shop();
       }else{
        //system("cls");
        system("clear" ) ;//for mobile
        cout << "\nYou don't have enough points \n";
        Shop();
       }
     
    }else if( choice == "2" ){
  
       if( level5_Open == 1 ){
        //system("cls");
        system("clear" ) ;//for mobile
        cout <<"This level is already with you \n";
        Shop();
       }else if( ::rank >= 30 ){
     
       level5_Open = 1 ;
        ::rank-=30;
        //system("cls");
        system("clear" ) ;//for mobile
        cout << "\nCongratulations, you have achieved level 5 \n";
        Shop();
       }else{
        //system("cls");
        system("clear" ) ;//for mobile
        cout << "\nYou don't have enough points \n";
        Shop();
       }
     
    }else if( choice == "3" ){
        //system("cls");                                            
        system("clear" ) ;//for mobile
        tetutorial();
   
    }else{
        //system("cls");
        system("clear" ) ;//for mobile
        Shop();
    }
  
}


//============================================================================== Devil Room 💯 ==============================================================================

void Devil_Room( string words ){

    string Devil;
    string Guess_from_the_devil;
    int Rand = rand()%2;
    int Guess_Devil;
    cout << "👹 hi !?\n\n";
    cout << "\n👹 We will throw a coin. If it is as you expected, \n\nI will give you 5 life, and if not, I will disgrace you with 4 points.👹\n\n";
    cout << "👹 Do you want to play with me  ? \n\n";
    cout << "Do you want to play together devil? [y,n]\n";
    //cout << Rand << endl ;
    cin >> Devil[0];
    //system("cls");
    system("clear" ) ;//for mobile
    Devil[0]=tolower(Devil[0]);
    
    if(Devil[0]=='y')
    {
               cout << "\n👹 We will throw a coin. If it is as you expected, \nI will give you 5 life, and if not, I will disgrace you with 4 points.👹\n";
               cout << "\n👹 Choose the side of the currency you want \n";
               cout << "\ntail [1] \n";
               cout << "head [0] \n";
               cin >> Guess_from_the_devil;
                //system("cls");
                system("clear" ) ;//for mobile
               if( Guess_from_the_devil != "1" and Guess_from_the_devil != "0" ){
                                Guess_from_the_devil = "0" ;
                                Guess_Devil=0;
                 cout <<"\n👹I will imagine that I heard you say \"head\" \n";
               }else if ( Guess_from_the_devil == "1" ){
               Guess_Devil=1;
               }else if ( Guess_from_the_devil == "0" ){
               Guess_Devil=0;
               }
    //===============================٤
               if( Rand==1 ){
               cout << "tail";
               }else{
               cout << "head";
               }
               if( Guess_Devil == Rand ){
                    cout << "\n👹Sh*t, it seems that you have won, take your prize and leave  \n";
                    life=5;
               }else if( Guess_Devil != Rand ){
                    cout <<"\n👹Hahahahahahahahhaha\n";
                    cout <<"👹 I'm sad for you \nYou seem to have bad luck\n";
                    cout << "The correct word was : "<< words <<endl;
                    ::rank-=4;
                    tetutorial();
               }
    }else{
     cout << "The correct word was : "<< words <<endl;
    }
}


//============================================================================== level 1 💯 ==============================================================================

void level1()
{
//=======================================💯 Storage 💯=======================================

  string words[]     = { "apple"   , "banana" , "orange"   , "grape"  ,     "watermelon"     ,  "pumpkin"   , "strawberry" , "manga", "pineapple", "coconut", "dragonfruit" , "peach", "cranberry", "lemon", "kiwi", "guava", "fig", "cherry", "raisin", "apricot", "cantaloupe"};
  string hint[]      = { "gravity" , "Monkey" , "Vitamin C",  "wine"  , "the size of a ball" , "Halloween"  ,
                         "A fruit that was used in ancient times as a treatment for many ailments, such as insomnia and headaches." , "A fruit also called the “King of Fruits” in India.", "A fruit that grows in the shape of a head, and resembles a pine in shape.",
                         "A fruit used in the manufacture of oils and cosmetics.", "A fruit with a hard outer shell and a red or pink inner pulp, also called \"passion fruit\" in some countries.", "Fruit that is born white, grows pink, and dies yellow.",
                         "It has a hard peel and soft pulp,Small red fruit, similar in shape to a grape.", "Helps prevent bacterial growth in foods and drinks.", "It is believed to be native to China,And its color is brown", "Its peel is yellow, green or red, depending on the type.", "A fruit mentioned in the Holy Quran,",
                         "A fruit used in making cakes, sweets and wine.", "A fruit made from grapes, also called \"dried grapes.\"", "A fruit with a thin outer peel.", "A fruit that grows in the shape of balls, also called \"yellow watermelon\" in some countries."};
  string help_hint[] = { "This fruit is rumored to have inspired Isaac Newton's theory of gravity when it fell on his head.",//apple
                         "It's a yellow, curved fruit that's a great source of potassium and is loved for its natural sweetness.",//banana
                         "This fruit has a vibrant, citrusy taste, and its color matches its name.\nIt's commonly associated with Vitamin C.",//orange
                         "These small, round fruits grow in clusters and can be red, green, or purple.\nThey're often used to make wine.",//grapes
                         "It's a large, juicy fruit with a green rind and red flesh.\nPerfect for hot summer days due to its high water content.",//watermelon
                         "A winter fruit that is often used in pies, cakes, and other desserts.",//pumpkin
                         "Small-sized fruit, red in color, with tiny seeds on its surface.",//strawberry
                         "A tropical fruit with a sweet and juicy flesh, usually golden-yellow in color, and a distinct fragrance.",
                         "A tropical fruit with a rough, spiky skin and a sweet, tangy taste.\nIt has yellow flesh and is often used in both savory and sweet dishes.",
                         "Tropical fruit with a hard shell and sweet water inside.",
                         "Exotic fruit with vibrant pink or yellow skin and white or red flesh.",
                         "A fruit used to make sweets, jams and juices.",
                         "It is similar in shape to a grape.",
                         "Fruit with yellow or light green skin and sour pulp.",
                         "A tropical fruit with a brown outer skin and white or light green pulp.",
                         "A tropical fruit, sweet and musky, also called \"tropical apple\" in some countries.",
                         "Its color is brown or green, and its taste is sweet or sour.",
                         "A summer fruit. It is red or black in color and has a sweet taste. It is used in making sweets, jams and juices.",
                         "Dried fruit, black or brown in color, with a sweet taste, and used in making sweets, baked goods and juices.",
                         "A sun-shaped fruit that grows on a small tree and is used to make sweets, jams, and juices.",
                         "A fruit with a hard outer shell, a yellow or orange inner pulp, and black seeds."};
  
//===============================================================================💯 Start 💯==============================================================================

     string Guess_the_player;
     int Rand = randomw(); 
     int Length = words[Rand].length(); 
     life = 5 ;
     help=0;
     string again="y" ;
     
     cout << " ======================================================== level 1 =========================================================================\n\n";
     cout << "\n You can use the points to request assistance or purchase additional stages from the store \n";
     cout << "\n\t   🌟First level laws🌟\n"<<"";
     cout << "\n🌟 1-Enter a letter from the word you predicted🌟\n" ;
     cout << "\n🌟 2-Type\"help\"for a hint But your points will not be the same🤡🤡🤡 🌟\n\n" ;
     cout << "\t    ⭐️ You're Pointe is :" << ::rank << " ⭐️\n\n" ;
     cout << "This fruit level will give you a hint about the fruit \n\n";
     string s="";
     //cout << "The correct word was : "<<words[Rand]<<Rand;  
     
     for(int i=0 ; i<Length ; i++ )
     {
       s+= "-";
     }
     
    while( life>0 )
    {
    //=================================💯 block for little help 💯=======================================
           if(life==1&&help==0){
            cout << "\n\t⚠️ Are you need A help⚠️\n⚠️ Type\"help\"for a hint But your points will not be the same ⚠️\n\n" ;
           }
    //=================================💯 block for Start 💯=======================================
       if(help==1){
       cout <<"\t🌟 Golden  Hint 🌟\n" << help_hint[Rand] << "\n\n";
       }
       cout <<"\t \t 🌟 Hint 🌟\n"<<hint[Rand] << endl ;
       cout << "\n\t    ⭐️  Enter your guess  ⭐️ \n\n";
       cout <<"life is : "<< life << endl ;
       cout << s << endl ;
       bool goodguss= false;
       cout << "Enter your guess \n\n";
       cin >> Guess_the_player;
      
       //system("cls");
       system("clear" ) ;//for mobile 
       
       
       for( int i=0 ; i<Guess_the_player.size() ; i++ ){
          Guess_the_player[i]=tolower(Guess_the_player[i]);
          }//تحويل الحروف الكبيره الي صغيره
       
    //==============================💯 block for Enter goodguess two time 💯===========================
       for( int i=0 ; i<Length ; i++)
       {
              if( Guess_the_player[0] == s[i] )
              {
                  cout <<"You entered this letter before\n";
                  break;
              }
       }
    //==================================💯 block for help 💯==================================
           if( Guess_the_player == "help" )
           {
            
              if( help == 1 )
              {
              
                  cout << "\tAre you kidding me😑";
                  cout << "\nThere is only one clarification at this level\n";
                  continue;
                  
              }
              else if( ::rank>0 )
              {
               help=1;
               cout << "\n  ⭐ Are you kidding me, you're still at the first level, but I'll help you a little ⭐\n";
               cout << "\t  ⭐ Well, you'll be down by one point 🤡 ⭐\n\n";
               cout << "🌝Your points were : " << ::rank;
               ::rank--;
               cout << "\n🌚Your points are new is : " << ::rank << "🐴\n" ;
               continue;
              }
              else
              {
               cout << "\t❌ You do not have 1 point to take help ❌";
               continue;
              }
           }
    //==============================💯 block for Check a 1 letter 💯==========================
           if( Guess_the_player.length() != 1){
            cout << "Enter a letter by letter\n";
            continue;
           }
    //============================💯 block for Check a letter or not 💯=======================      
           if (!isalpha(Guess_the_player[0])){
            cout <<"Enter letters, not numbers or symbols\n";
            continue;
           }
    //========================💯 block for Check a letter on a storage 💯=====================
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//للكشف في وحده التخزين
                  goodguss= true;
              }
          }
    //==============================💯 block for badGuess 💯==================================
          if(!goodguss){
           life--;
           cout << "\tYou're answer not correct [ " << Guess_the_player[0] << " ]❌\n" ;
          }
    //==================================💯 block for win 💯===================================
            if( s==words[Rand] ){
            cout << s << endl ;
            ::rank = ::rank + 7 ;
            cout << "\tCongratulations, you have passed the first level  \n" << endl ;
            cout << "We will see if you can win the second level \n\n";
            cout << "You're Pointe is : " <<::rank<<endl<<endl;
            level2();
            break;
          }
    //==================================💯 block for lost 💯==================================
          if ( life <=0 )                                                                 //==
          {                                                                               //==
             cout << "The correct word was : "<<words[Rand];                              //==
             cout << "\nYou lost and your score is the same: "<<::rank<<endl;             //==
             //=========================💯 block for play again 💯==============          //==
              cout << "Are you want play again [y/n]";                      //==          //==
              cin >>again;                                                  //==          //==
              again[0]=tolower(again[0]);                                   //==          //==
              if( again[0]!='y' )                                           //==          //==
              {                                                             //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              tetutorial();                                                 //==          //==
              break;                                                        //==          //==
              }else{                                                        //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              if( ::rank<=0 ){                                              //==          //==
              ::rank = 1;                                                   //==          //==
              }else{                                                        //==          //==              
              cout<< "you're score is : " <<::rank<<endl;//one time         //==          //==
              }                                                             //==          //==
              level1();                                                     //==          //==
              break;                                                        //==          //==
              }                                                             //==          //==
             //=================================================================          //==
          }                                                                               //==
    //========================================================================================
    
     }
}

//============================================================================== level 2 💯 ==============================================================================
//ready for start
void level2()
{
//=======================================💯 Storage 💯=======================================

  string words[]     = {"Argentina","Mexico","Spain","Canada","Italy","Australia","Indonesia","Turkey","France","Russia","Brazil","Germany","Japan","India","China","Palestine","Egypt","Algeria", "Sudan", "Morocco", "Qatar"};
  string hint[]      = {"It is also famous for its stunning nature, such as the Andes Mountains, Patagonian Desert and sandy beaches ",
                        "It is the cradle of ancient civilizations, such as the Maya and Aztec civilizations ",
                        "It is the cradle of ancient civilizations, such as the Iberian and Roman civilizations ",
                        "It is home to elk, one of the most famous animals in the country ",
                        "It is home to many famous tourist attractions, such as the Colosseum, Trevi Fountain and the Leaning Tower of Pisa ",
                        "It is famous for its stunning nature, such as the Alps and white sandy beaches ",
                        "It is famous for its picturesque nature, such as the islands of Bali, Lombok and Java ",
                        "It is famous for its beautiful nature, such as the Taurus Mountains and the Mediterranean Sea ",
                        "It is home to gastronomy, one of the most famous types of gastronomy in the world ",
                        "It is home to the largest forest area in the world, the taiga forests, and it is home to the largest lake in the world, Lake Baikal. ",
                        "It is the largest country in South America in terms of land area ",
                        "It is home to the world's largest automobile market ",
                        "It is also famous for its historical attractions, such as Himeji Castle and Kyoto Imperial Palace  ",
                        "It is the third largest country in the world in terms of population ",
                        "It has become a global economic power in the twenty-first century And a large population ",
                        "The capital of this country is the city of Jerusalem ",
                        "It is a country rich in history and culture and is a coastal country, as its coast overlooks the Mediterranean Sea and the Red Sea ",
                        "It is famous for its picturesque nature, such as the Atlas Mountains and the Sahara Desert, and is also famous for its historical tourist attractions, such as the city of Tlemcen and the city of Constantine. ",
                        "Located on the banks of the Nile River, it was part of the ancient Egyptian Empire ",
                        "It is a coastal country, with its coast overlooking the Mediterranean Sea and the Atlantic Ocean ",
                        "It is a country rich in oil and natural gas "};
  string help_hint[] = {"It is home to Maradona, a famous sports personality ",
                        "It is home to colorful popular festivals, such as the Day of the Dead and the San Jose Festival ",
                        "Its capital, Madrid, is home to many famous tourist attractions, such as the Alhambra and the Cathedral of Santiago de Compostela ",
                        "It is home to hockey, which is the most popular sport in the country ",
                        "It is believed that pizza originated in this country ","It is home to kangaroos, one of the most famous animals in the world ",
                        "It is home to the largest Muslim population in the world ","It is home to many famous tourist attractions, such as Hagia Sophia, Topkapi Palace and Galata Tower ",
                        "It is home to the fashion industry, and is one of the most important centers of the fashion industry in the world ",
                        "It is the largest country in the world in terms of land area ",
                        "She won the World Cup five times ",
                        "It is home to the luxury watch industry ",
                        "It is famous for its anime series ",
                        "The largest religious country in the world ",
                        "The capital of this country is Beijing ",
                        "It is also famous for its historical tourist attractions, such as Al-Aqsa Mosque and the Church of the Holy Sepulcher ",
                        "It is also famous for its historical attractions, such as the pyramids and the Sphinx ",
                        "It gained its independence from France in 1962 ", 
                        "The capital of this country is Khartoum ", 
                        "The country of a million martyrs ", "Hosted the 2022 FIFA World Cup "};
//===============================================================================💯 Start 💯==============================================================================

     string Guess_the_player;
     string Devil ;
     int Rand = randomw(); 
     int Length = words[Rand].length(); 
     life = 5 ;
     help=0;
     string again="y" ;
     
     cout << " ======================================================== level 2 =========================================================================\n\n";
     cout << "\n\t   🌟 Second level rules 🌟\n"<<"";
     cout << " This level will be about international  \n\n";
     cout << "\n🌟 1-Enter a letter from the word you predicted 🌟\n" ;
     cout << "\n🌟 2-Type\"help\"for a hint But your points It will decrease 2 🤡 🌟\n\n" ;
     cout << "\t    ⭐️ you're score is :" << ::rank << " ⭐️\n\n" ;
     string s="";
     //cout << "The correct word was : "<<words[Rand]<<Rand;  
     for(int i=0 ; i<Length ; i++ )
     {
       s+= "-";
     }
     
    while( life>0 )
    {
    //=================================💯 block for little help 💯=======================================
           if(life==1&&help==0){
            cout << "\n\t⚠️ Are you need A help⚠️\n⚠️ Type\"help\"for a hint But your points It will decrease 2  ⚠️\n\n" ;
           }
    //=================================💯 block for Start 💯=============================================
       if(help==1){
       cout <<"\t🌟 Golden  Hint 🌟\n" << help_hint[Rand] << "\n\n";
       }
       cout <<"\t🌟 Hint 🌟\n"<<hint[Rand] << endl ;
       cout << "\n\t    ⭐️  Enter your guess  ⭐️ \n\n";
       cout <<"life is : "<< life << endl ;
       cout << s << endl ;
       bool goodguss= false;
       cout << "Enter your guess \n\n";
       cin >> Guess_the_player;
       //system("cls");
       system("clear" ) ;//for mobile 
       
       
       for( int i=0 ; i<Guess_the_player.size() ; i++ ){
          Guess_the_player[i]=tolower(Guess_the_player[i]);
          }//تحويل الحروف الكبيره الي صغيره
       
    //==============================💯 block for Enter goodguess two time 💯============================
       for( int i=0 ; i<Length ; i++)
       {
              if( Guess_the_player[0] == s[i] )
              {
                  cout <<"You entered this letter before\n";
                  break;
              }
       }
    //==================================💯 block for help 💯============================================
           if( Guess_the_player == "help" )
           {
            
              if( help == 1 )
              {
              
                  cout << "\tAre you kidding me😑";
                  cout << "\nThere is only one Golden Hint \n";
                  continue;
                  
              }
              else if( ::rank>=2 )
              {
               help=1;
               cout << "\t  ⭐ Well, you'll be down by two point 🤡 ⭐\n\n";
               cout <<   "   🌝Your points were : " << ::rank;
               ::rank-=2;
               cout << "\n   🌚Your points are new is : " << ::rank << "🐴\n" ;
               continue;
              }
              else
              {
               cout << "\t❌ You do not have 2 point to take help ❌";
               continue;
              }
           }
    //==============================💯 block for Check a 1 letter 💯==========================
           if( Guess_the_player.length() != 1){
            cout << "Enter a letter by letter\n";
            continue;
           }
    //============================💯 block for Check a letter or not 💯=======================      
           if (!isalpha(Guess_the_player[0])){
            cout <<"Enter letters, not numbers or symbols\n";
            continue;
           }       
    //==============================💯 block for Check a Capital letter 💯============================
          Guess_the_player[0]=toupper(Guess_the_player[0]);
          
              if( Guess_the_player[0] == words[Rand][0] )
              {
                  s[0]=Guess_the_player[0];//كشف عن الحروف الكبيره
                  goodguss= true;
              }
              
          Guess_the_player[0]=tolower(Guess_the_player[0]);
    //==============================💯 block for Check a letter 💯============================
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//للكشف في وحده التخزين
                  goodguss= true;
              }
          }
    //==============================💯 block for badGuess 💯==================================
          if(!goodguss){
           life--;
           cout << "\tYou're answer not correct [ " << Guess_the_player[0] << " ]❌\n" ;
          }
    //==================================💯 block for win 💯===================================
            if( s==words[Rand] ){
            cout << s << endl ;
            ::rank+=7;
            cout << "\t Well done, you have passed the second level  \n" << endl ;
            cout << "You will be rewarded with 7 points  \n\n";
            cout << "You're Points is : " <<::rank<<endl<<endl;
            level3();
            break;
          }
    //==================================💯 block for lost 💯==================================
          if ( life <=0 )                                                                 //==
          {                                                                               //==
                                                                                          //==
             if(::rank>=5){                                                               //==
             Devil_Room( words[Rand] );                                                   //==
             continue;                                                                    //==
             }                                                                            //==
             cout << "The correct word was : "<< words[Rand] << endl;                     //==
             cout << "\nYou lost and your score is the same: "<<::rank<<endl;             //==
             //=========================💯 block for play again 💯==============          //==
              cout << "Are you want play again [y/n]";                      //==          //==
              cin >>again;                                                  //==          //==
              again[0]=tolower(again[0]);                                   //==          //==
              if( again[0]!='y' )                                           //==          //==
              {                                                             //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              tetutorial();                                                 //==          //==
              break;                                                        //==          //==
              }else{                                                        //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              if( ::rank<=0 ){                                              //==          //==
              ::rank = 1;                                                   //==          //==
              }else{                                                        //==          //==
              cout<< "you're score is : " <<::rank<<endl;//one time         //==          //==
              }                                                             //==          //==
              level2();                                                     //==          //==
              break;                                                        //==          //==
              }                                                             //==          //==
             //=================================================================          //==
          }                                                                               //==
    //========================================================================================
 }
}

//============================================================================== level 3 💯 ==============================================================================

void level3()
{
//=======================================💯 Storage 💯=======================================

  string words[]     = {"Iniesta","Fermino","Kante","Van Persie","Casemiro","Kanfaro","Benzema","Suarez","Gerard","Maldini","Harry Kane","Haaland","Ozil","Ronaldo","Ibrahimovic","Pele","Abu Trika","Shikabla", "Salah", "Messi", "Cristiano"};
  string hint[]      = {"He scored a goal in the 2010 World Cup final",
                        "A player nicknamed \"Denmit\"",
                        "A French player nicknamed \"The Bee\"",
                        "The bird",
                        "Brazilian anchor player",
                        "Captain of the Italian national team in the 2006 World Cup",
                        "Abu Ibrahim",
                        "Former Liverpool and Barcelona striker",
                        "The iconic captain of Liverpool",
                        "The owner of the fastest goal in the history of the Champions League final",
                        "The prince",
                        "Vikings",
                        "He has big eyes and played for Arsenal",
                        "He wore diapers to matches",
                        "The Sultan",
                        "The brown jewel",
                        "The prince of hearts",
                        "Apache", 
                        "He is considered the greatest winger in the history of Liverpool", 
                        "His wife Antonella", 
                        "Portuguese player who played for Manchester United"};
  string help_hint[] = {"He is called a painter",
                        "The former striker for Liverpool and current club for Al-Ahly Saudi Arabia",
                        "The former Chelsea player and currently plays for the Saudi club Al-Ittihad",
                        "The former Manchester United striker, who has Dutch nationality",
                        "He played with Cristiano at Real Madrid and Manchester United",
                        "Real Madrid defender who won the Golden Ball",
                        "A Muslim player who played for Real Madrid and currently plays for the Saudi club Al-",
                        "One of the best attacking trio in Barcelona’s history",
                        "It is considered the best midfield in the club’s history",
                        "The legendary defender of AC Milan",
                        "Former Tottenham striker",
                        "Manchester City striker",
                        "He is called the night player",
                        "He has a strange haircut and was nicknamed The Phenomenon",
                        "Most players are arrogant","He won the World Cup three times",
                        "He currently works as an analyst on beIN Sports channels","His real name is Mahmoud", 
                        "The best player in Egypt’s history and the second top scorer in the national team", 
                        "He won the 2020 World Cup", 
                        "He is a legend of Portugal and Real Madrid and one of the best players in history"};
//===============================================================================💯 Start 💯==============================================================================

     string Guess_the_player;
     string Devil ;
     int Rand = randomw(); 
     int Length = words[Rand].length(); 
     life = 5 ;
     help=0;
     string again="y" ;
     
     cout << " ======================================================== level 3 =========================================================================\n\n";
     cout << "\n\t   🌟 Third level rules  🌟\n"<<"";
     cout << " This level is for football players  \n\n";
     cout << "\n🌟 1-Enter a letter from the word you predicted 🌟\n" ;
     cout << "\n🌟 2-Type\"help\"for a hint But your points It will decrease 3 🤡 🌟\n\n" ;
     cout << "\t    ⭐️ you're score is :" << ::rank << " ⭐️\n\n" ;
     string s="";
     
     for(int i=0 ; i<Length ; i++ )
     {
      if(isspace(words[Rand][i])){
      s+=" ";
      }else{
       s+= "-";
      }
     }
     
    while( life>0 )
    {
    //=================================💯 block for little help 💯=======================================
           if(life==1&&help==0){
            cout << "\n\t⚠️ Are you need A help⚠️\n⚠️ Type\"help\"for a hint But your points It will decrease 3  ⚠️\n\n" ;
           }
    //=================================💯 block for Start 💯=============================================
       if(help==1){
       cout <<"\t🌟 Golden  Hint 🌟\n" << help_hint[Rand] << "\n\n";
       }
       cout <<"\t🌟 Hint 🌟\n"<<hint[Rand] << endl ;
       cout << "\n\t    ⭐️  Enter your guess  ⭐️ \n\n";
       cout <<"life is : "<< life << endl ;
       cout << s << endl ;
       bool goodguss= false;
       cout << "Enter your guess \n\n";
       cin >> Guess_the_player;
       //system("cls");
       system("clear" ) ;//for mobile 
       
       
       for( int i=0 ; i<Guess_the_player.size() ; i++ ){
          Guess_the_player[i]=tolower(Guess_the_player[i]);
          }//تحويل الحروف الكبيره الي صغيره
       
    //==============================💯 block for Enter goodguess two time 💯============================
       for( int i=0 ; i<Length ; i++)
       {
              if( Guess_the_player[0] == s[i] )
              {
                  cout <<"You entered this letter before\n";
                  break;
              }
       }
    //==================================💯 block for help 💯============================================
           if( Guess_the_player == "help" )
           {
            
              if( help == 1 )
              {
              
                  cout << "\tAre you kidding me😑";
                  cout << "\nThere is only one Golden Hint \n";
                  continue;
                  
              }
              else if( ::rank>=3 )
              {
               help=1;
               cout << "\t  ⭐ Well, you'll be down by three point 🤡 ⭐\n\n";
               cout << "   🌝Your points were : " << ::rank;
               ::rank-=3;
               cout << "\n.  🌚Your points are new is : " << ::rank << "🐴\n" ;
               continue;
              }
              else
              {
               cout << "\t❌ You do not have 3 point to take help ❌";
               continue;
              }
           }
    //==============================💯 block for Check a 1 letter 💯==========================
           if( Guess_the_player.length() != 1){
            cout << "Enter a letter by letter\n";
            continue;
           }
    //============================💯 block for Check a letter or not 💯=======================      
           if (!isalpha(Guess_the_player[0])){
            cout <<"Enter letters, not numbers or symbols\n";
            continue;
           }       
    //==============================💯 block for Check a Capital letter 💯============================
          Guess_the_player[0]=toupper(Guess_the_player[0]);
          
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//كشف عن الحروف الكبيره
                  goodguss= true;
              }
          }
              
          Guess_the_player[0]=tolower(Guess_the_player[0]);
    //==============================💯 block for Check a letter 💯============================
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//للكشف في وحده التخزين
                  goodguss= true;
              }
          }
    //==============================💯 block for badGuess 💯==================================
          if(!goodguss){
           life--;
           cout << "\tYou're answer not correct [ " << Guess_the_player[0] << " ]❌\n" ;
          }
    //==================================💯 block for win 💯===================================
            if( s==words[Rand] ){
            cout << s << endl ;
            ::rank+=7;
            cout << "\t Well done, you have passed the the third level  \n" << endl ;
            cout << "You will be rewarded with 7 points  \n\n";
            cout << "You're Points is : " <<::rank<<endl<<endl;
            tetutorial();
            break;
          }
    //==================================💯 block for lost 💯==================================
          if ( life <=0 )                                                                 //==
          {                                                                               //==
                                                                                          //==
             cout << "The correct word was : "<< words[Rand] << endl;                     //==
             cout << "\nYou lost and your score is the same: "<<::rank<<endl;             //==
             //=========================💯 block for play again 💯==============          //==
              cout << "Are you want play again [y/n]";                      //==          //==
              cin >>again;                                                  //==          //==
              again[0]=tolower(again[0]);                                   //==          //==
              if( again[0]!='y' )                                           //==          //==
              {                                                             //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              tetutorial();                                                 //==          //==
              break;                                                        //==          //==
              }else{                                                        //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              if( ::rank<=0 ){                                              //==          //==
              ::rank = 1;                                                   //==          //==
              }else{                                                        //==          //==
              cout<< "you're score is : " <<::rank<<endl;//one time         //==          //==
              }                                                             //==          //==
              level3();                                                     //==          //==
              break;                                                        //==          //==
              }                                                             //==          //==
             //=================================================================          //==
          }                                                                               //==
    //========================================================================================
 }
}

//============================================================================== level 4 💯 ==============================================================================

void level4()
{
//=======================================💯 Storage 💯=======================================

  string words[]     = {"Kashkari","Ful Medames","Mansaf","Mloukhia","Kabsa","Coffee","Chocolate","Ice cream","Custard","Pancakes","Noodles","Biryani","Tacos","Falafel","Curry","Shawarma","Burger","Pasta", "Rice", "Sushi", "Pizza"};
  string hint[]      = {"Rice, lentils, pasta, fried onions, tomato sauce","Boiled fava beans cooked with chickpeas, tomatoes, garlic, onions","Rice with lamb, yogurt, saffron","Thick vegetable soup made with mallow leaves, chickpeas, tomatoes, onions, garlic","Rice, chicken or lamb, spices, vegetables","Roasted beans, hot","Cacao, sweet","Milk, sugar","Milk, eggs","Flatbread, griddle","Dough, stir-fry","Rice, spices","Tortilla, meat","Chickpea","Spicy, meat","Grilled meat","Beef, bun","Dough, long", "Grain", "Rice, seafood", "Flatbread, sauce, cheese"};
  string help_hint[] = {"Egypt","Egypt and Lebanon","Jordan","Egypt","Saudi Arabia","Ethiopia, Yemen, and other countries","Mexico, Spain, and other countries","United States and other countries","United Kingdom and other countries ","United States and Canada","China, Japan, and Southeast Asia","India and Southeast Asia","Mexico","Middle East","India and Southeast Asia","Middle East","United States","Italy", "China, Japan, and Southeast Asia", "Japan", "Italy"};
//===============================================================================💯 Start 💯==============================================================================

     string Guess_the_player;
     string Devil ;
     int Rand = randomw(); 
     int Length = words[Rand].length(); 
     life = 5 ;
     help=0;
     string again="y" ;
     
     cout << " ======================================================== level 4 =========================================================================\n\n";
     cout << "\n\t   🌟 Laws of the fourth level 🌟\n"<<"";
     cout << " This level is about famous foods   \n\n";
     cout << "\n🌟 1-Enter a letter from the word you predicted 🌟\n" ;
     cout << "\n🌟 2-Type\"help\"for a hint But your points It will decrease 3 🤡 🌟\n\n" ;
     cout << "\t    ⭐️ you're score is :" << ::rank << " ⭐️\n\n" ;
     string s="";
     
     for(int i=0 ; i<Length ; i++ )
     {
      if(isspace(words[Rand][i])){
      s+=" ";
      }else{
       s+= "-";
      }
     }
     
    while( life>0 )
    {
    //=================================💯 block for little help 💯=======================================
           if(life==1&&help==0){
            cout << "\n\t⚠️ Are you need A help⚠️\n⚠️ Type\"help\"for a hint But your points It will decrease 2  ⚠️\n\n" ;
           }
    //=================================💯 block for Start 💯=============================================
       if(help==1){
       cout <<"\t🌟 Golden  Hint 🌟\n" << help_hint[Rand] << "\n\n";
       }
       cout <<"\t🌟 Hint 🌟\n"<<hint[Rand] << endl ;
       cout << "\n\t    ⭐️  Enter your guess  ⭐️ \n\n";
       cout <<"life is : "<< life << endl ;
       cout << s << endl ;
       bool goodguss= false;
       cout << "Enter your guess \n\n";
       cin >> Guess_the_player;
       //system("cls");
       system("clear" ) ;//for mobile 
       
       
       for( int i=0 ; i<Guess_the_player.size() ; i++ ){
          Guess_the_player[i]=tolower(Guess_the_player[i]);
          }//تحويل الحروف الكبيره الي صغيره
       
    //==============================💯 block for Enter goodguess two time 💯============================
       for( int i=0 ; i<Length ; i++)
       {
              if( Guess_the_player[0] == s[i] )
              {
                  cout <<"You entered this letter before\n";
                  break;
              }
       }
    //==================================💯 block for help 💯============================================
           if( Guess_the_player == "help" )
           {
            
              if( help == 1 )
              {
              
                  cout << "\tAre you kidding me😑";
                  cout << "\nThere is only one Golden Hint \n";
                  continue;
                  
              }
              else if( ::rank>=3 )
              {
               help=1;
               cout << "\t  ⭐ Well, you'll be down by three point 🤡 ⭐\n\n";
               cout << "   🌝Your points were : " << ::rank;
               ::rank-=3;
               cout << "\n.  🌚Your points are new is : " << ::rank << "🐴\n" ;
               continue;
              }
              else
              {
               cout << "\t❌ You do not have 3 point to take help ❌";
               continue;
              }
           }
    //==============================💯 block for Check a 1 letter 💯==========================
           if( Guess_the_player.length() != 1){
            cout << "Enter a letter by letter\n";
            continue;
           }
    //============================💯 block for Check a letter or not 💯=======================      
           if (!isalpha(Guess_the_player[0])){
            cout <<"Enter letters, not numbers or symbols\n";
            continue;
           }       
    //==============================💯 block for Check a Capital letter 💯============================
          Guess_the_player[0]=toupper(Guess_the_player[0]);
          
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//كشف عن الحروف الكبيره
                  goodguss= true;
              }
          }
              
          Guess_the_player[0]=tolower(Guess_the_player[0]);
    //==============================💯 block for Check a letter 💯============================
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//للكشف في وحده التخزين
                  goodguss= true;
              }
          }
    //==============================💯 block for badGuess 💯==================================
          if(!goodguss){
           life--;
           cout << "\tYou're answer not correct [ " << Guess_the_player[0] << " ]❌\n" ;
          }
    //==================================💯 block for win 💯===================================
            if( s==words[Rand] ){
            cout << s << endl ;
            ::rank+=9;
            cout << "\t Well done, you have passed the the the fourth level  \n" << endl ;
            cout << "You will be rewarded with 9 points  \n\n";
            cout << "You're Points is : " <<::rank<<endl<<endl;
            tetutorial();
            break;
          }
    //==================================💯 block for lost 💯==================================
          if ( life <=0 )                                                                 //==
          {                                                                               //==
                                                                                          //==
             cout << "The correct word was : "<< words[Rand] << endl;                     //==
             cout << "\nYou lost and your score is the same: "<<::rank<<endl;             //==
             //=========================💯 block for play again 💯==============          //==
              cout << "Are you want play again [y/n]";                      //==          //==
              cin >>again;                                                  //==          //==
              again[0]=tolower(again[0]);                                   //==          //==
              if( again[0]!='y' )                                           //==          //==
              {                                                             //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              tetutorial();                                                 //==          //==
              break;                                                        //==          //==
              }else{                                                        //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              if( ::rank<=0 ){                                              //==          //==
              ::rank = 1;                                                   //==          //==
              }else{                                                        //==          //==
              cout<< "you're score is : " <<::rank<<endl;//one time         //==          //==
              }                                                             //==          //==
              level4();                                                     //==          //==
              break;                                                        //==          //==
              }                                                             //==          //==
             //=================================================================          //==
          }                                                                               //==
    //========================================================================================
 }
}

//============================================================================== level 5 💯 ==============================================================================

void level5()
{
//=======================================💯 Storage 💯=======================================

  string words[]     = { "problem","key","A shirt","Tomorrow","Your age","Sorrow","happiness","love","Hope","Anniversary","energy","spirit","idea","time","shadow","sun","Clouds","Stars", "Space", "shadow", "Wind"};
  string hint[]      = { "What is something that the more you take, the more you get? ",
                         "What's something that can enter every room in your house, but can't move? ",
                         "What has a neck but no head, has a body but no legs, and has arms but no hands?",
                         "What is always coming but never arrives?",
                         "What goes up but never comes down?",
                         "I am in every pain,\nBut I can't see it,\nwho am I?",
                         "I am in every heart,\nBut I can't see it,\nwho am I?",
                         "I am in every heart,\nBut I can't see it,\nwho am I?",
                         "I will be in the future,\nBut I can't see it,\nwho am I?",
                         "I am in the past,\nBut I can't see it,\nwho am I?",
                         "I am in everything,\nBut I can't see it,\nwho am I?",
                         "I am in everyone,\nBut I can't see it,\nwho am I?",
                         "I'm everywhere,\nBut I can't see it,\nwho am I?",
                         "I'm there all the time\nBut I can't see it,\nwho am I?",
                         "I'll be in the fire\nBut I can't catch fire,\nwho am I?",
                         "I'm in the water,\nBut I can't swim,\nwho am I?",
                         "I will be in heaven,\nBut I can't see it,\nwho am I?\n",
                         "I am at night,\nBut I can't see it,\nwho am I?", 
                         "I'm everywhere,\nBut I can't touch it,\nwho am I?", 
                         "I am everywhere,\nBut I can't see you,\nwho am I?", 
                         "I walk without feet,\nI speak without a mouth,\nI see without eyes,\nwho am I?"};
  
//===============================================================================💯 Start 💯==============================================================================

     string Guess_the_player;
     string Devil ;
     int Rand = randomw(); 
     int Length = words[Rand].length(); 
     life = 5 ;
     help=0;
     string again="y" ;
     
     cout << " ======================================================== level 5 =========================================================================\n\n";
     cout << "\n\t   🌟 Level 5 rules  🌟\n"<<"";
     cout << " This leveler extracts gas from the Sphinx  \n\n";
     cout << "\n🌟 1-Enter a letter from the word you predicted 🌟\n" ;
     cout << "\t    ⭐️ you're score is :" << ::rank << " ⭐️\n\n" ;
     string s="";
     
     for(int i=0 ; i<Length ; i++ )
     {
      if(isspace(words[Rand][i])){
      s+=" ";
      }else{
       s+= "-";
      }
     }
     
    while( life>0 )
    {
    //=================================💯 block for Start 💯=============================================
       
       cout <<"\t🌟 Hint 🌟\n"<<hint[Rand] << endl ;
       cout << "\n\t    ⭐️  Enter your guess  ⭐️ \n\n";
       cout <<"life is : "<< life << endl ;
       cout << s << endl ;
       bool goodguss= false;
       cout << "Enter your guess \n\n";
       cin >> Guess_the_player;
       //system("cls");
       system("clear" ) ;//for mobile 
       
       
       for( int i=0 ; i<Guess_the_player.size() ; i++ ){
          Guess_the_player[i]=tolower(Guess_the_player[i]);
          }//تحويل الحروف الكبيره الي صغيره
       
    //==============================💯 block for Enter goodguess two time 💯============================
       for( int i=0 ; i<Length ; i++)
       {
              if( Guess_the_player[0] == s[i] )
              {
                  cout <<"You entered this letter before\n";
                  break;
              }
       }
    //==================================💯 block for help 💯============================================
           if( Guess_the_player == "help" ){
             cout << "The Sphinx is of no help \n";
             continue;
           }
    //==============================💯 block for Check a 1 letter 💯==========================
           if( Guess_the_player.length() != 1){
            cout << "Enter a letter by letter\n";
            continue;
           }
    //============================💯 block for Check a letter or not 💯=======================      
           if (!isalpha(Guess_the_player[0])){
            cout <<"Enter letters, not numbers or symbols\n";
            continue;
           }       
    //==============================💯 block for Check a Capital letter 💯============================
          Guess_the_player[0]=toupper(Guess_the_player[0]);
          
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//كشف عن الحروف الكبيره
                  goodguss= true;
              }
          }
              
          Guess_the_player[0]=tolower(Guess_the_player[0]);
    //==============================💯 block for Check a letter 💯============================
          for( int i=0 ; i<Length ; i++)
          {
              if( Guess_the_player[0] == words[Rand][i] )
              {
                  s[i]=Guess_the_player[0];//للكشف في وحده التخزين
                  goodguss= true;
              }
          }
    //==============================💯 block for badGuess 💯==================================
          if(!goodguss){
           life--;
           cout << "\tYou're answer not correct [ " << Guess_the_player[0] << " ]❌\n" ;
          }
    //==================================💯 block for win 💯===================================
          if( s==words[Rand] )
          {
            cout << s << endl ;
            ::rank+=10;
            cout << "\t Well done, you have passed the the the Fifth level  \n" << endl ;
            cout << "You will be rewarded with 10 points  \n\n";
            tetutorial();
            break;
          }
    //==================================💯 block for lost 💯==================================
          if ( life <=0 )                                                                 //==
          {                                                                               //==
                                                                                          //==
             cout << "The correct word was : "<< words[Rand] << endl;                     //==
             cout << "\nYou lost and your score is the same: "<<::rank<<endl;             //==
             //=========================💯 block for play again 💯==============          //==
              cout << "Are you want play again [y/n]";                      //==          //==
              cin >>again;                                                  //==          //==
              again[0]=tolower(again[0]);                                   //==          //==
              if( again[0]!='y' )                                           //==          //==
              {                                                             //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              tetutorial();                                                 //==          //==
              break;                                                        //==          //==
              }else{                                                        //==          //==
              //system("cls");                                              //==          //==
              system("clear" ) ;//for mobile                                //==          //==
              if( ::rank<=0 ){                                              //==          //==
              ::rank = 1;                                                   //==          //==
              }else{                                                        //==          //==
              cout<< "you're score is : " <<::rank<<endl;//one time         //==          //==
              }                                                             //==          //==
              level5();                                                     //==          //==
              break;                                                        //==          //==
              }                                                             //==          //==
             //=================================================================          //==
          }                                                                               //==
    //========================================================================================
 }
}