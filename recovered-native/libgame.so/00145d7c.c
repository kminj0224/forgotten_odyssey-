/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145d7c  Symbol: blit */

/* cocos2d::CCGrid3D::blit() */

void cocos2d::CCGrid3D::blit(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_00145dc4;
  uVar1 = DAT_00145dc0;
  iVar3 = *(int *)(in_r0 + 0x18);
  iVar4 = *(int *)(in_r0 + 0x1c);
  glDisableClientState(DAT_00145dc0);
  glVertexPointer(3,uVar2,0,*(undefined4 *)(in_r0 + 0x38));
  glTexCoordPointer(2,uVar2,0,*(undefined4 *)(in_r0 + 0x34));
  glDrawElements(4,iVar3 * iVar4 * 6,DAT_00145dc8,*(undefined4 *)(in_r0 + 0x40));
  glEnableClientState(uVar1);
  return;
}


