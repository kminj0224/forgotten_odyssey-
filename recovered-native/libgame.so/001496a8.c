/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001496a8  Symbol: draw */

/* cocos2d::CCLayerColor::draw() */

void cocos2d::CCLayerColor::draw(void)

{
  bool bVar1;
  int in_r0;
  
  CCNode::draw();
  glDisableClientState(DAT_00149734);
  glDisable(DAT_00149738);
  glVertexPointer(2,DAT_0014973c,0,in_r0 + 0x118);
  glColorPointer(4,DAT_00149740,0,in_r0 + 0x138);
  if (*(int *)(in_r0 + 0x14c) == 1) {
    if (*(int *)(in_r0 + 0x150) == DAT_00149744) {
      bVar1 = false;
      if (*(char *)(in_r0 + 0x148) != -1) {
        glBlendFunc(DAT_00149748);
        bVar1 = true;
      }
      goto LAB_0014970e;
    }
  }
  glBlendFunc(*(int *)(in_r0 + 0x14c),*(undefined4 *)(in_r0 + 0x150));
  bVar1 = true;
LAB_0014970e:
  glDrawArrays(5,0,4);
  if (bVar1) {
    glBlendFunc(1,DAT_00149744);
  }
  glEnableClientState(DAT_00149734);
  glEnable(DAT_00149738);
  return;
}


