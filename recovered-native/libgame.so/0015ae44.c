/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ae44  Symbol: setColor */

/* cocos2d::CCSprite::setColor(cocos2d::_ccColor3B const&) */

void cocos2d::CCSprite::setColor(_ccColor3B *param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  byte *in_r1;
  uint uVar4;
  
  *(byte *)(param_1 + 0x70) = *in_r1;
  *(byte *)((int)param_1 + DAT_0015aec0) = in_r1[1];
  iVar2 = DAT_0015aec0;
  bVar1 = in_r1[2];
  *(byte *)((int)param_1 + 0x1c2) = bVar1;
  *(undefined *)((int)param_1 + 0x105) = *(undefined *)(param_1 + 0x70);
  *(undefined *)((int)param_1 + 0x106) = *(undefined *)((int)param_1 + iVar2);
  *(byte *)((int)param_1 + DAT_0015aec4) = bVar1;
  if (*(char *)((int)param_1 + DAT_0015aec8) != '\0') {
    uVar4 = (uint)*(byte *)(param_1 + 0x41);
    uVar3 = __divsi3(uVar4 * *in_r1,0xff);
    *(undefined *)((int)param_1 + 0x105) = uVar3;
    uVar3 = __divsi3(uVar4 * in_r1[1],0xff);
    *(undefined *)((int)param_1 + 0x106) = uVar3;
    uVar3 = __divsi3(uVar4 * in_r1[2],0xff);
    *(undefined *)((int)param_1 + 0x107) = uVar3;
  }
  updateColor((CCSprite *)param_1);
  return;
}


