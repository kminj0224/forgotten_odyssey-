/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151e60  Symbol: ~CCParticleFireworks */

/* cocos2d::CCParticleFireworks::~CCParticleFireworks() */

CCParticleFireworks * __thiscall
cocos2d::CCParticleFireworks::~CCParticleFireworks(CCParticleFireworks *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151e84 + 0x151e6c);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


