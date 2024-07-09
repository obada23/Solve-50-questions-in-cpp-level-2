#include <iostream>
using namespace std;

int rightAnswer=0;
int wrongAnswer=0;

enum enQuestionLevel { Easy=1, Med=2, Hard=3, MixQ=4 };

enum enOperationType { Add=1, Sub=2, Mul=3, Div=4, MixO=5 };

struct stQuestion
{
    int number1;
    int number2;
    enQuestionLevel level;
    enOperationType operation;
    int correctAnswer;
    int playerAnswer;
    bool answerResult;
};

struct stQuizz
{
    
    stQuestion questionList[100];
    short numberOfQuestions;
    enQuestionLevel level;
    enOperationType operation;
    short numberOfWrongAnswers;
    short numberOfRightAnswers;
    bool isPass;

};

void resetScreen()
{
    system("clear");
}

int howManyQuestions()
{
    int question;
    do
    {
        cout << "How many questions do you want to answer ?" << endl;
        cin >> question;
    } while (question<0);
    cout << endl;

    return question;
    
}

enQuestionLevel enterQuestionLevel()
{
    int questionLevel;
    do
    {
        cout << "Enter Question Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
        cin >> questionLevel;
        cout << endl;

    } while (questionLevel<1||questionLevel>4);
    return (enQuestionLevel)questionLevel;
}

enOperationType enterOperation()
{
    int operation;
    do
    {
        cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
        cin >> operation;
        cout << endl;

    } while (operation<1||operation>5);
    return (enOperationType)operation;  
}

int randomNumber(short from, short to)
{
    return rand()%(to-from+1)+from;
}

int calculaterFunction(stQuestion question)
{
    switch(question.operation)
    {
        case Add : return question.number1+question.number2; break;
        case Sub : return question.number1-question.number2; break;
        case Mul : return question.number1*question.number2; break;
        default : return question.number1/question.number2; break;
    }
}

void genarateQuestion(stQuestion &stquestion)
{
    
    if(stquestion.level == MixQ)
        stquestion.level = (enQuestionLevel)randomNumber(1,3);
    if(stquestion.operation == MixO)
        stquestion.operation = (enOperationType)randomNumber(1,4);

    switch(stquestion.level)
    {
        case Easy :
        {
            stquestion.number1 = randomNumber(1,10);
            stquestion.number2 = randomNumber(1,20);
            break;
        }
        
        case Med :
        {
            stquestion.number1 = randomNumber(10,50);
            stquestion.number2 = randomNumber(10,25);
            break;
        }

        default :
        {
            stquestion.number1 = randomNumber(50,100);
            stquestion.number2 = randomNumber(15,35);
            break;
        }

    }

        
}

char getOperation(stQuestion operation)
{
    char op[4] = {'+','-','*','/'};
    return op[operation.operation-1];
}

void showQuestion(stQuestion question)
{
    cout << question.number1 << endl;
    cout << question.number2 << " " << getOperation(question) << endl;
    cout << "-----------------\n";
}

void answerQuestion(stQuestion question)
{
    question.correctAnswer=calculaterFunction(question);
    cin >> question.playerAnswer;
    if(question.playerAnswer==question.correctAnswer)
    {
        cout << "Right Answer :-)" << endl << endl;
        rightAnswer++;
    }
    else
    {
        cout << "Wrong Answer :-(" << endl << endl;
        cout << "The right answer is: " << question.correctAnswer << endl << endl;
        wrongAnswer++;
    }
}

void resetToDefualt(stQuestion &question,enQuestionLevel level,enOperationType opType)
{
    question.operation = opType;
    question.level = level;
}

bool isPass()
{
    if(rightAnswer>wrongAnswer)
        return true;
    else
        return false;
}

stQuizz fillFinalResult(short howManyQuestions,stQuestion q)
{
    stQuizz quizz;
    quizz.numberOfQuestions = howManyQuestions;
    quizz.level = q.level;
    quizz.operation = q.operation;
    quizz.numberOfRightAnswers = rightAnswer;
    quizz.numberOfWrongAnswers = wrongAnswer;
    quizz.isPass = isPass();
    return quizz;
}

stQuizz playGame(short howManyQuestions)
{
    stQuestion stquestion;
    stquestion.level=enterQuestionLevel();
    stquestion.operation=enterOperation();
    enQuestionLevel lev=stquestion.level;
    enOperationType opType=stquestion.operation;
    for(int question=1; question<=howManyQuestions; question++)
    {
        cout << "Question [" << question << "/" << howManyQuestions << "]" << endl;
        genarateQuestion(stquestion);
        showQuestion(stquestion);
        answerQuestion(stquestion);
        resetToDefualt(stquestion,lev,opType);

    }
    return fillFinalResult(howManyQuestions, stquestion);
}

void showFinalResultScreen()
{
    cout << "   ------------------------------\n\n";
    cout << "   Final Results is";
    if(isPass()) cout << " Pass :-) " << endl << endl;
    else cout << " Fail :-(" << endl << endl;
    cout << "   ------------------------------\n\n";
}

string getQuestionLevel(stQuizz quizz)
{
    string quizzlevel[4] = {"Easy", "Med", "Hard","Mix"};
    return quizzlevel[quizz.level-1];
}

char getOperationType(stQuizz quizz)
{
    char op[4] = {'+','-','*','/'};
    return op[quizz.operation-1];
}

void getFinalResult(stQuizz quizz)
{
    cout << "   Number of Questions     : " << quizz.numberOfQuestions << endl<< endl;
    cout << "   Questions level         : " << getQuestionLevel(quizz) << endl<< endl;
    cout << "   Operation type          : " << getOperationType(quizz) << endl<< endl;
    cout << "   Number of Right Answers : " << rightAnswer << endl<< endl;
    cout << "   Number of Wrong Answers : " << wrongAnswer << endl<<endl;
    cout << "   ------------------------------\n\n";
}

void startGame() 
{
    char playAgain;
    do
    {
        resetScreen();
        stQuizz quizz = playGame(howManyQuestions());
        showFinalResultScreen();
        getFinalResult(quizz);
        cout << "   Do you want to play again? Y/N ? ";
        cin >> playAgain;
        rightAnswer=0;
        wrongAnswer=0;

        
    } while (playAgain=='Y'||playAgain=='y');
    
}

int main()
{ 
    srand((unsigned)time(NULL));
    startGame();
    return 0;
}