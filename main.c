#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void compress(){

int seen_char=getchar();
int next_char;
int counter=1;

while(seen_char != EOF){
    next_char= getchar();

 if(seen_char==next_char){

 counter++;

    if(counter>=255){
    putchar(seen_char);
    putchar(counter);
     counter = 0;
    }
 }
else{
    
    putchar(seen_char);
    putchar(counter);
     counter = 1;
   
  seen_char=next_char;

}



}




}



void decompress(){


while(1){

int d_char = getchar();

if(d_char == EOF)
break;




int d_counter = getchar();

if( d_counter == EOF )
break;


for(int i=0; i< d_counter; i++){
    putchar(d_char);
}

}



}





int main(int argc, char *argv[]){

if(argc != 2){

    printf("usage for this program is 'compressor <compress/decompress> your_file'\n");
    exit(-1);
}

else {

    if(strcmp(argv[1],"compress")==0){
    compress();
    }

    else if(strcmp(argv[1],"decompress")==0){

        decompress();
    }

    else{

        printf("invalid command\n");
        exit(-1);
    }
}

}
