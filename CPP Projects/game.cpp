#include<iostream>
#include<string>
#include<vector>
#include"Player.h"
#include"Warrior.h"
#include"Preist.h"
#include"Mage.h"

void printMainMenu();
void printRaceMenu();
Player* createPlayer(string playerName,int typeNum,int raceNum);
void doCleanup(vector<Player*> playerList);
Race getRace(int raceNum);
void printAll(vector<Player*> playerList);

using namespace std;

int main()
{
	int choice;
	int raceNum;
	string playerName;
	
	vector <Player*> playerList;
	
	printMainMenu();
	
	cin>>choice;
	cin.get();
	
	while(choice != 0)
	{
		cout<<"What is your Name?"<<endl;
		getline(cin,playerName);
		
		printMainMenu();
		cin>>choice;
		cin.get();
		
		Player* tempPlayer = createPlayer(playerName,choice,raceNum);
		playerList.push_back(tempPlayer);
		
		printMainMenu();
		cin>>choice;
		cin.get();
		
	}
	printAll(playerList);
	doCleanup(playerList);
	
	cout<<"Program Done!"<<endl;
	return 0;
}
void printMainMenu()
{
	cout<<endl;
	cout<<"Which Character do you want?"<<endl;
	cout<<"\t 1.Create a Warrior"<<endl;
	cout<<"\t 2.Create a Preist"<<endl;
	cout<<"\t 3.Create a Mage"<<endl;
	cout<<"\t 0. Finish Creating Player Charater"<<endl;
	cout<<endl;
}
void printRaceMenu()
{
	cout<<endl;
	cout<<"Now,Which Race do you want?"<<endl;
	cout<<"\t1 - Human"<<endl;
	cout<<"\t2 - Elf"<<endl;
	cout<<"\t3 - Dwarf"<<endl;
	cout<<"\t4 - orc"<<endl;
	cout<<"\t5 - Troll"<<endl;
}
Player* createPlayer(string playerName,int typeNum,int raceNum)
{
	Race playerRace = getRace(raceNum);
	Player* tempPlayer = nullptr;
	
	if(typeNum == 1)
	{
		tempPlayer = new Warrior(playerName,playerRace);
	}
	else if(typeNum == 2)
	{
		tempPlayer = new Preist(playerName,playerRace);
	}
	else if(typeNum == 3)
	{
		tempPlayer = new Mage(playerName,playerRace);
	}
	return tempPlayer;
}
void doCleanup(vector<Player*> playerList)
{
	for(Player* player = playerList)
	{
		delete player;
	}
	playerList.clear();
}
Race getRace(int raceNum)
{
	Race race;
	if(raceNum == 1)
	{
		race = HUMAN;
	}
	else if(raceNum == 2)
	{
		race = ELF;
	}
	else if(raceNum == 3)
	{
		race = DWARF;
	}
	else if(raceNum == 4)
	{
		race = ORC;
	}
	else if(raceNum == 5)
	{
		race = TROLL;
	}
	return race;
}
void printAll(vector<Player*> playerList)
{
	for(Player* player = playerList)
	{
		cout<<"I am a "<<player->whatRace()<<" and my attack is : "<<player->attack()<<endl;
	}
	
}