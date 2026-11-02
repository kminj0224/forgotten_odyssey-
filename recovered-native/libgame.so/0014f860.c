/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f860  Symbol: draw */

/* cocos2d::CCProgressTimer::draw() */

undefined8 cocos2d::CCProgressTimer::draw(void)

{
  bool bVar1;
  int in_r0;
  int *piVar2;
  undefined4 uVar3;
  int in_r1;
  undefined4 uVar4;
  int local_18;
  int local_14;
  
  local_18 = in_r0;
  local_14 = in_r1;
  CCNode::draw();
  if ((*(int *)(in_r0 + 0x10c) == 0) || (*(int **)(in_r0 + 0x104) == (int *)0x0)) goto LAB_0014f902;
  (**(code **)(**(int **)(in_r0 + 0x104) + 0xf8))(&local_18);
  if ((local_18 != 1) || (bVar1 = false, local_14 != DAT_0014f904)) {
    glBlendFunc();
    bVar1 = true;
  }
  piVar2 = (int *)(**(code **)(**(int **)(in_r0 + 0x104) + 0x118))();
  uVar3 = (**(code **)(*piVar2 + 0x20))();
  glBindTexture(DAT_0014f908,uVar3);
  glVertexPointer(2,DAT_0014f90c,0x14,*(undefined4 *)(in_r0 + 0x10c));
  glTexCoordPointer(2,DAT_0014f90c,0x14,*(int *)(in_r0 + 0x10c) + 0xc);
  glColorPointer(4,DAT_0014f910,0x14,*(int *)(in_r0 + 0x10c) + 8);
  if (*(uint *)(in_r0 + 0xfc) < 2) {
    uVar4 = *(undefined4 *)(in_r0 + 0x108);
    uVar3 = 6;
LAB_0014f8f0:
    glDrawArrays(uVar3,0,uVar4);
  }
  else if (*(uint *)(in_r0 + 0xfc) - 2 < 4) {
    uVar4 = *(undefined4 *)(in_r0 + 0x108);
    uVar3 = 5;
    goto LAB_0014f8f0;
  }
  if (bVar1) {
    glBlendFunc(1,DAT_0014f904);
  }
LAB_0014f902:
  return CONCAT44(local_14,local_18);
}


