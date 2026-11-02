/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159b70  Symbol: draw */

/* cocos2d::CCSprite::draw() */

void cocos2d::CCSprite::draw(void)

{
  bool bVar1;
  int in_r0;
  int *piVar2;
  
  CCNode::draw();
  if ((*(int *)(in_r0 + 0x11c) != 1) || (bVar1 = false, *(int *)(in_r0 + 0x120) != DAT_00159bf8)) {
    glBlendFunc(*(int *)(in_r0 + 0x11c),*(undefined4 *)(in_r0 + 0x120));
    bVar1 = true;
  }
  piVar2 = *(int **)(in_r0 + 0x124);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x20))(piVar2);
  }
  glBindTexture(DAT_00159bfc,piVar2);
  glVertexPointer(3,DAT_00159c00,0x18,in_r0 + 0x160);
  glColorPointer(4,DAT_00159c04,0x18,in_r0 + 0x16c);
  glTexCoordPointer(2,DAT_00159c00,0x18,in_r0 + 0x170);
  glDrawArrays(5,0,4);
  if (bVar1) {
    glBlendFunc(1,DAT_00159bf8);
  }
  return;
}


