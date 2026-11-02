/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161328  Symbol: initIndices */

/* cocos2d::CCTextureAtlas::initIndices() */

void cocos2d::CCTextureAtlas::initIndices(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int in_r0;
  int iVar4;
  short sVar5;
  uint uVar6;
  
  if (*(int *)(in_r0 + 0x28) != 0) {
    sVar5 = 0;
    iVar4 = 0;
    for (uVar6 = 0; uVar6 < *(uint *)(in_r0 + 0x28); uVar6 = uVar6 + 1) {
      sVar1 = sVar5 + 3;
      *(short *)(*(int *)(in_r0 + 0x14) + iVar4) = sVar5;
      sVar2 = sVar5 + 1;
      *(short *)(*(int *)(in_r0 + 0x14) + iVar4 + 2) = sVar2;
      sVar3 = sVar5 + 2;
      *(short *)(*(int *)(in_r0 + 0x14) + iVar4 + 4) = sVar3;
      sVar5 = sVar5 + 4;
      *(short *)(*(int *)(in_r0 + 0x14) + iVar4 + 6) = sVar1;
      *(short *)(*(int *)(in_r0 + 0x14) + iVar4 + 8) = sVar3;
      *(short *)(*(int *)(in_r0 + 0x14) + iVar4 + 10) = sVar2;
      iVar4 = iVar4 + 0xc;
    }
    glBindBuffer(DAT_001613bc,*(undefined4 *)(in_r0 + 0x18));
    glBufferData(DAT_001613bc,*(int *)(in_r0 + 0x28) * 0x60,*(undefined4 *)(in_r0 + 0x30),
                 DAT_001613c0);
    glBindBuffer(DAT_001613c4,*(undefined4 *)(in_r0 + 0x1c));
    glBufferData(DAT_001613c4,*(int *)(in_r0 + 0x28) * 0xc,*(undefined4 *)(in_r0 + 0x14),
                 DAT_001613c8);
    glBindBuffer(DAT_001613bc,0);
    glBindBuffer(DAT_001613c4,0);
  }
  return;
}


