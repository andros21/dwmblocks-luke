//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
   /*Icon*/    /*Command*/       /*Update Interval*/     /*Update Signal*/
   {"",        "sb-clock",       60,                     1},
   {"",        "sb-cpu",         30,                     18},
   {"",        "sb-volume",      0,                      10},
   {"",        "sb-volume-mic",  0,                      10},
   {"",        "sb-internet",    60,                     4},
   {"",        "sb-battery",     60,                     3},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
