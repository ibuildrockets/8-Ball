// Code on this page from here - http://www.instructables.com/id/Digital-Magic-Eight-Ball/
// Works, nice and neat :) Super!

const char* phrases[] = /* Known phrases */{
"Yes - definitely",
"As I see it, yes",
"Without a doubt ",
"Ask again later ",
" My reply is no ",
" Absolutely not ",
"  It is certain ",
"  Very doubtful ",
"  I'm uncertain ",
"  Outlook good  ",
"  Not a chance  ",
"   Most likely  ",
"   I doubt it   ",
"   Ask again    ",
"     No way     ",
"       Yes      ",
"        No      "};
const char* output;
int numberofphrases = 17; //Number of phrases known, must be the same as, well, the number of phrases known
