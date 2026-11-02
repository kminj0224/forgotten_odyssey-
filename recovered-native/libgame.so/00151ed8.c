/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151ed8  Symbol: ~CCParticleFlower */

/* cocos2d::CCParticleFlower::~CCParticleFlower() */

CCParticleFlower * __thiscall cocos2d::CCParticleFlower::~CCParticleFlower(CCParticleFlower *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151efc + 0x151ee4);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


