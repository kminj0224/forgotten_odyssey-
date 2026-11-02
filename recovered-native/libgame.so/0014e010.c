/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e010  Symbol: unselected */

/* cocos2d::CCMenuItemSprite::unselected() */

void cocos2d::CCMenuItemSprite::unselected(void)

{
  CCMenuItem *in_r0;
  int *piVar1;
  
  CCMenuItem::unselected(in_r0);
  (**(code **)(**(int **)(in_r0 + 0x114) + 0x6c))(*(int **)(in_r0 + 0x114),1);
  piVar1 = *(int **)(in_r0 + 0x118);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  }
  piVar1 = *(int **)(in_r0 + 0x11c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  }
  return;
}


