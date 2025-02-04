// Animação: 1 + 1 = 10 (soma em binario) - Tecla 0

int t0_frame1[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{4, 5, 239}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}}
};

int t0_frame2[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int t0_frame3[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{4, 5, 239}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}}
};

int t0_frame4[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int t0_frame5[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{4, 5, 239}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {4, 5, 239}, {0, 0, 0}, {0, 0, 0}},
    {{4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}}
};

int t0_frame6[5][5][3] = {
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}},
    {{4, 5, 239}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {4, 5, 239}},
    {{4, 5, 239}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {4, 5, 239}},
    {{4, 5, 239}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {4, 5, 239}},
    {{0, 0, 0}, {4, 5, 239}, {4, 5, 239}, {4, 5, 239}, {0, 0, 0}}
};


void ten_animation(int sleep) {
    print_sprite(t0_frame1);
    npWrite();
    sleep_ms(sleep);
    npClear();

    print_sprite(t0_frame2);
    npWrite();
    sleep_ms(sleep);
    npClear();

    print_sprite(t0_frame3);
    npWrite();
    sleep_ms(sleep);
    npClear();

    print_sprite(t0_frame4);
    npWrite();
    sleep_ms(sleep);
    npClear();

    print_sprite(t0_frame5);
    npWrite();
    sleep_ms(sleep);
    npClear();

    print_sprite(t0_frame6);
    npWrite();
    sleep_ms(sleep);
    npClear();
}
