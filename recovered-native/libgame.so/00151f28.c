/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151f28  Symbol: ~CCParticleSpiral */

/* cocos2d::CCParticleSpiral::~CCParticleSpiral() */

CCParticleSpiral * __thiscall cocos2d::CCParticleSpiral::~CCParticleSpiral(CCParticleSpiral *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151f4c + 0x151f34);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


