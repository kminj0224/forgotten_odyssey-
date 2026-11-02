/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e8b2  Symbol: actions */

/* cocos2d::CCSpawn::actions(cocos2d::CCFiniteTimeAction*, ...) */

void cocos2d::CCSpawn::actions(CCFiniteTimeAction *param_1,...)

{
  CCFiniteTimeAction *in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  CCFiniteTimeAction **local_1c;
  CCFiniteTimeAction *local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_1c = &local_c;
  local_c = in_r1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  if (param_1 != (CCFiniteTimeAction *)0x0) {
    while( true ) {
      if (*local_1c == (CCFiniteTimeAction *)0x0) break;
      param_1 = (CCFiniteTimeAction *)actionOneTwo(param_1,*local_1c);
      local_1c = local_1c + 1;
    }
  }
  return;
}


