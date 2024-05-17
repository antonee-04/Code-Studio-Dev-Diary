# Anthony Grummett - My Dev Diary

## C++ -
### 19/10/2023 - Hello World

My First attempts with C++ were kept pretty basic but having used C# before i was fairly confident in the aspects of coding. I still decided to keep it basic for now as I figured it would be conducive to learning the differences between C# and C++ along with refreshing myself with programming before I took on a larger task.

![script to print image](/Screenshots/Hello-World.png?raw=true)

The first step for any programmer is "Hello World!" so I decided to attempt the simple code seeing as it is my first step into C++. I was able to figure out the basic syntax for a simple program using examples of C++ docs. The differences with C# that I immediately noticed were the use of 'cout' instead of 'console.writeline' which I feel is a lot easier when it comes to typing. One thing that did confuse me was 'using namespace std;' along with '#include <iostream>' as in c# the code would be as simple as 'console.writeline(“Hello world”/n);' without any namespaces or the iostream. I did research on these and found that 'iostream' integrates input and output and 'std' allows for the use of standard functions and types. 

Aside from that this was fairly straightforward and was a good start to my coding journey for the future though it was only a “hello world!” program.

### 24/10/2023 - Messing with functions

![script to print image](/Screenshots/cowboys.png?raw=true)

For my next step in figuring out the basics of C++ I decided to create a simple text based game scene using functions, random number generation and a for loop. The random number generation was something i found particularly difficult as it differed from C# a lot and required me to use the ‘#include <time.h>’ which I had to look up, however once I looked it up it wasn’t difficult to understand and was similar to ‘import random’. I used random number generation to give the player a percentage chance that they “die” when initiating the duel just to have another dialogue option..A lot of the code here is similar to what I was used to in C# which gave me quite the advantage when it came to creating things like functions and using for loops and if statements, the only issue I really faced was trying to use the functions, I didn’t realise the function code had to be above the calling of the function for it to work and this stumped me for quite some time until I realised it. The two functions I created are for firing the bullets and for initiating the duel dialogue. In my second if statement i called the main() function so that the dialogue would restart if the player didn’t type what was required, this was my simple fix just to keep things simple without needing to code more but in a real game i would make it so the player could retry input or add more trees or certain dialogue choices. 

I think I am ready to move onto creating something a lot more advanced in C++ based on the ease I am having with the basics, thanks to my knowledge of C#. The only problems I am facing are simple syntax problems and once I overcome those the logic I already know seems to be enough. 

## C++ Game - 
I decided to try my hand at creating a simple board game in C++, I have done this many times before using C# and it should be quite straightforward considering what I know from C# seems to transition into C++ quite well, which is something i expected as they are both C based languages.

### 24/11/2023 - using vectors to set up a board in a function

![script to print image](/Screenshots/vectors.png?raw=true)

Here I transferred my knowledge of arrays in C# to create vectors as they act similarly, however when researching which one was best to store numerical coordinates on a board the vectors seemed to be a better option. I taught myself how to create the variable for the vectors by surmising that it would be the same way an array variable is created in C# which proved to be correct! The printBoard was fairly simple, I designed it so that it would create a board using for loops, one for the row and one for the column and spaces, this way the board was created automatically at the sizing I wanted without me having to manually write the board myself, it also makes it easier to isolate the different squares when I end up doing things like placing the X’s and O’s and checking if the spaces are filled.  


### 29/11/2023 - functions for playing the game

![script to print image](/Screenshots/TicTacToe.png?raw=true)

Today I made the functions that made playing the game actually possible, I started with the function that allowed the player to pick if they were X or O, I decided on doing this instead of assigning a value to the player to add more interaction to the game, i used a simple if else statement that assigned the opposite value to the computer and asked again if the player input something silly. This was quite simple to implement and was quite easy to use in the later parts of the code where I needed it. 

I then created the actual function to play the game, this simply takes in the numbers input and makes it so that the player symbol is placed in the corresponding slot on the board vector, this takes advantage of the way i created the board making it easier to code in general. I did, however, face a problem when coding the invalid line as I couldn't simply recall the function and restart as it would create an infinite loop where everything input became invalid even if it was valid so I, instead, opted to copy over the initial code which worked fine. 

The computer opponent uses random numbers, which I learnt how to do a few weeks ago, to pick squares on the board between the dimensions of the board. In future I could create a more advanced computer that reacts to where the player places their symbol, however I would need to brush up more on my C++ knowledge for that. I chose to do it the way i did simply because I lack the knowledge to create a tougher opponent but it is still functional and works as a game. 


### 3/12/23 - creating a win and tie event

![script to print image](/Screenshots/win.png?raw=true)

Today I finished off my game by creating the function for winning and the function for tying, the tie function simply checks if the board is filled by checking each square and if one or more is still empty it returns false. I faced an issue with this as, to begin with, I created a function where the tie would happen when the game exceeded a certain amount of tries but that ended up causing problems when the player would input something incorrectly and end the game early. 

![script to print image](/Screenshots/tictactoeing.png?raw=true)

The checkWin function was fairly easy to implement, i simply coded a for loop to check each square and return true if there was a winner. I learnt that I could use player as a parameter which meant that I could code it so that whoever’s turn it was the ‘checkWin’ was checking for the corresponding symbol. I did this in conjunction with the ‘?’ operator which is essentially a short-hand for an if else statement that let me pass either ‘playerSymbol’ or ‘computerSymbol’ to the check when necessary. This was super useful as it let me perform the checks for each player without having to write code for checking the player and computer separately after each of their turns.

## Starting on unreal - 

### 26/11/2023 - creating a multi shot gun

I decided to start with learning Unreal Engine, the whole thing is very new to me and I have very minimal experience in scripting so the next few days i’ll spend time working with blueprints using the knowledge that i already have with coding to help me and the tutorials provided for me to help me understand how to use them.

![script to print image](/Screenshots/multishot.png?raw=true)

The first thing I was taught to do in unreal engine was how to modify the first person template, this was fairly straightforward as i just had to follow a tutorial however it did teach me a lot about how things work with unreal engine. I feel my prior knowledge of coding helped me to grasp what was going on with each node a lot better than if I went into this blind, I quickly realised using blueprints was very similar to coding in a sense that the logic is carried over. For example the for each loop node here works the exact same as in normal programming where it loops the code for however many iterations are specified, this allowed for me to modify the template so that multiple shots were fired at once from the gun. I do feel without tutorials to help me I would learn more, however, so in future I am going to attempt some work on my own and garner my own grasp on the blueprint code and the syntax.

### 28/11/2023 - triggering multi shot

![script to print image](/Screenshots/multi-trigger.png?raw=true)

Today I decided to work more on modifying the first person template. I created a trigger event for what I did last time. I worked completely on my own this time which proved to be more conducive to my learning just as I predicted.in my last entry. The thing that I think went well here was my knowledge of if statements as I figured there would be a way to use them in unreal engine which led me to finding the branch node, I used this in conjunction to a variable I created that checked whether or not the right mouse button was being clicked which is exactly the way I would have written it in normal code. The problem I faced with this was actually figuring out which blueprints to use as there is many to choose from and spending all my time searching through every single one would take forever so instead of doing that I did research on which blueprints would accomplish the tasks that I wanted such as searching for the existence of an if statement in Unreal Engine. Going forward I will keep working on learning more useful blueprints like the ‘Branch’ and I will try to develop the first person blueprint even more.


## Reflection - 17/5/2024

Overall, I have learnt many things throughout my journey with programming this year. The games and projects that I have worked on have gotten better and better over the time I have spent coding and I am now familiar with a new language through my work in C++ but also I am familiar with scripting and using blueprints through my work in Unreal Engine 5. I have learnt a lot about coding games, particularly the logic behind the code and methods that use the logic to create code for the game to be playable. If I could go back and spend more time working, however, I would. I think a lot of my time was ill spent and the projects I have created could be more fleshed out and finished if I used my time more wisely. In the coming year I will strive to learn more about C++ especially as I believe knowing the basic code can help me with scripting in future and further me both in programming and in Unreal. I hope that my projects keep improving from here on out!
