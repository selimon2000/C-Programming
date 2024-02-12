/*Write a program to find the number of times that a given word (i.e. a short string) occurs in a sentence
(i.e. a long string!). Read data from standard scanf input (you will store two arrays of char to memory).
You will first acquire a single word, and then a longer string of general text. Your program should pass
the two strings to a function which will count the number of occurrences. Extension: Let the function
also turn any blank spaces into dashes.

Typical output should be something like:
 The word is "the".
 The sentence is "the cat sat on the mat".
 The word occurs 2 times.
 If I remove the spaces: "the-cat-sat-on-the-mat"   */

#include <stdio.h>
#include <string.h>

int occurence(char *pword, char *psentence)
{
    int n=0, c=0; //n will represent the occurance of a word, and c will count a matching character of a possible whole word
    int slen = strlen(psentence);
    int wlen = strlen(pword);

    for (int s = 0; s < slen-(wlen-1); s++)
    {
        for (int w = 0; w < wlen; w++)
        {
            if (pword[w] == psentence[s+w])
            {c++;}
            
            else
            {break;}
            
            if (c==wlen)
            {n++;
            c=0;}
        }
    }
    return n;
}

int main()
{
    char word[] = "the";
    char sentence[] = "the cat sat on the mat";
    printf("The number of times the word \"%s\" occurs in the sentence \"%s\" is:", word, sentence);

    printf("%d", occurence(word, sentence));
}