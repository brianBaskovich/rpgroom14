//Brian Baskovich
//CSC251-01
//Room Project v1

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char name[256];
char quest[256];
char color[256];
char capital[256];
char airVelocity[256];
int i = 0;

int main(void)
{
	puts("You enter room 14 and the door closes behind you. You hear a click that tells you the door is sealed from the water outside, but also locked. The first thing you notice is that it's dark. Like really dark. Darker than I like my coffee. And that's pretty dark. Anyway, you hear a disembodied voice that seems to come from everywhere. It tells you that if you want to progress you must correctly answer all its questions.");
	puts("He asks his first question: \"WHAT... is your name?\"");
	scanf("%s", name);
	puts("You hear an electric hum as the lights in the room turn on and begin to brighten. They're uncomfortably bright, like looking into the sun, but at least you can see. The room is quite large - larger than it should be considering how close the other doors were. Besides the lights, the room is completely and utterly undecorated. So much so it doesnt even have a door. Including the one you came through. Strange, isn't it?");
	puts("\"WHAT... is your quest?\"");
	scanf("%s", quest);
	puts("WHAT... is your favorite color?");
	scanf("%s", color);
	printf("The lights dim to a more comfortable amount and slowly turn %s.\n", color);
	puts("WHAT... is the capital of Assyria?");
	scanf("%s", capital);
	for(i = 0; i < 256; i++)
	{
		if(capital[i] >= 'A' && capital[i] <= 'Z')
		{
			capital[i] = tolower(capital[i]);
		}
	}
	i = 0;
	if((strcmp(capital, "assur") != 0) && (strcmp(capital, "nineveh") != 0))
	{
		puts("You die");
		return EXIT_SUCCESS;
	}
	puts("WHAT... is the air speed velocity of an unladen swallow?");
	scanf("%s", airVelocity);
	for(i = 0; i < 256; i++)
	{
		if(airVelocity[i] >= 'A' && airVelocity[i] <= 'Z')
		{
			airVelocity[i] = tolower(airVelocity[i]);
		}
	}
	if(strcmp(airVelocity, "what do you mean? an african or european swallow?") != 0)
	{
		puts("You die");
		return EXIT_SUCCESS;
	}
	puts("On the side of the room opposite from where you entered, the wall slowly ascends like a garage door to a bridge. You win!");
}
