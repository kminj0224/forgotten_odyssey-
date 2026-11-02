/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001553ee  Symbol: initIndices */

/* cocos2d::CCParticleSystemQuad::initIndices() */

void __thiscall cocos2d::CCParticleSystemQuad::initIndices(CCParticleSystemQuad *this)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  sVar3 = 0;
  iVar2 = 0;
  for (uVar4 = 0; uVar4 < *(uint *)(this + 0x1dc); uVar4 = uVar4 + 1) {
    *(short *)(*(int *)(this + 0x200) + iVar2) = sVar3;
    *(short *)(*(int *)(this + 0x200) + iVar2 + 2) = sVar3 + 1;
    *(short *)(*(int *)(this + 0x200) + iVar2 + 4) = sVar3 + 2;
    *(short *)(*(int *)(this + 0x200) + iVar2 + 10) = sVar3 + 1;
    *(short *)(*(int *)(this + 0x200) + iVar2 + 8) = sVar3 + 2;
    sVar1 = sVar3 + 3;
    sVar3 = sVar3 + 4;
    *(short *)(*(int *)(this + 0x200) + iVar2 + 6) = sVar1;
    iVar2 = iVar2 + 0xc;
  }
  return;
}


