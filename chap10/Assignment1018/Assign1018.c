/* 파일명: Assign1018.c

 * 내용: PA18. 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된 SONG 구조체 배열이 있을 때, 
               전체 곡 목록을 보여주고 사용자로부터 플레이리스트에 추가할 노래를 번호로 선택하게 한다. 플레 이리스트에 노래를 추가할 때마다 
               플레이리스트의 곡 목록과 전체 재생 시간이 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만 등록할 수 있다.

 * 작성자: 김영재

 * 날짜: 2025.06.06

 * 버전: v1.0
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct song
{
    int number;
    char title[20];
    char artist[20];
    char genre[10];
    int time;
} SONG;



void print_Songs(SONG* songs, int size);
void Print(void);
void print_Playlist(SONG* playlist[], int count);


int main()
{
    Print();
    return 0;
}


void Print(void)
{
    SONG songs[8] = {
    {1, "thank u, next", "Ariana Grande", "pop", 208},
    {2, "Attention", "Charlie Puth", "pop", 211},
    {3, "별 보러 가자", "박보검", "ballad", 316},
    {4, "How Long", "Charlie Puth", "pop", 198},
    {5, "I'm Fine", "방탄소년단", "hip-hop", 299},
    {6, "봄날", "방탄소년단", "hip-hop", 274},
    {7, "Awake", "방탄소년단", "ballad", 226},
    {8, "아낙네", "MINO", "hip-hop", 241}
    };

    

    int size = sizeof(songs) / sizeof(songs[0]);


    SONG* playlist[5] = { NULL };
    int count = 0;
    int song_number;


    print_Songs(songs, size);


    while (count < 5) 
    {
        printf("\n플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &song_number);


        if (song_number == 0)
        {
            return;
        }


        if (song_number < 1 || song_number > size) 
        {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }
        
        playlist[count] = &songs[song_number - 1];
        count++;

        print_Playlist(playlist, count);
    }

    printf("\n플레이리스트가 가득 찼습니다.\n");
    printf("프로그램을 종료합니다.");
}



void print_Songs(SONG* songs, int size)
{
    printf("    제목               아티스트        장르        재생시간\n");

    for (int i = 0; i < size; i++) 
    {
        printf("%-2d  %-18s %-15s %-10s %4d초\n", songs[i].number, songs[i].title, songs[i].artist, songs[i].genre, songs[i].time);
    }
}



void print_Playlist(SONG* playlist[], int count) {
    printf("\n<< 플레이리스트 >>\n");

    if (count == 0) {
        printf("플레이리스트가 비어 있습니다.\n");
        return;
    }

    int totalPlayTime = 0;
    for (int i = 0; i < count; i++) {
        if (playlist[i] != NULL) {
            printf("%-18s %-15s %-10s %4d초\n", playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->time);
            totalPlayTime += playlist[i]->time;
        }
    }

    printf("총 재생시간: %d초\n", totalPlayTime);
}