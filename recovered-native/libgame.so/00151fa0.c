/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151fa0  Symbol: ~CCParticleSnow */

/* cocos2d::CCParticleSnow::~CCParticleSnow() */

CCParticleSnow * __thiscall cocos2d::CCParticleSnow::~CCParticleSnow(CCParticleSnow *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151fc4 + 0x151fac);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


