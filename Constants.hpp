//
//  Constants.hpp
//  HaxClient
//
//  Created by Andrej Karadzic on 11/29/15.
//  Copyright © 2015 Andrej Karadzic. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

#define KEY_UP 1
#define KEY_RIGHT 2
#define KEY_DOWN 4
#define KEY_LEFT 8
#define KEY_SHOOT 16

#define PLAYER_RADIUS 1.5
#define BALL_RADIUS 1.25

struct coord {
  float x, y;
};

struct player {
  int id;
  coord pos;
  coord vel;

  bool const operator==(const player &that) { return (id == that.id); }
};

struct goal {
  float x;
  float goalWidth;
};

#endif /* Constants_h */