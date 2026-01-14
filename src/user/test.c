#include "user/lib/libapi.h" 

int main(){
    int win_id = qk_window_create(200, 150, "Timer Test");
    if(win_id < 0) return 1;

    qk_draw_rect(win_id, 0, 0, 200, 150, 0xFF333333);
    qk_draw_text(win_id, 10, 30, "Animation...", 0xFFFFFFFF);

    int x = 10;
    int direction = 1;

    while(1){
        qk_draw_rect(win_id, x, 60, 20, 20, 0xFF333333);

        x += direction * 2;
        if(x > 170 || x < 10) direction *= -1;

        qk_draw_rect(win_id, x, 60, 20, 20, 0xFF00FF00);

        qk_sleep(20);
    }
    return 0;
}