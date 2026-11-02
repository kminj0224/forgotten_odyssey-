/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00152f68  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleFire::initWithTotalParticles(unsigned int) */

bool __thiscall cocos2d::CCParticleFire::initWithTotalParticles(CCParticleFire *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  CCPoint aCStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_001530b4;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_30;
    *(undefined4 *)(this + 0x10c) = local_2c;
    uVar4 = DAT_001530bc;
    uVar3 = DAT_001530b8;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x110) = uVar3;
    uVar3 = DAT_001530c0;
    *(undefined4 *)(this + 0x114) = uVar4;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x170) = uVar3;
    *(undefined4 *)(this + 0x174) = DAT_001530c4;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar5 = *(code **)(*(int *)this + 0x3c);
    uVar6 = __mulsf3(local_38,0x3f000000);
    CCPoint::CCPoint(aCStack_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    uVar6 = (*pcVar5)(this,aCStack_28);
    CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    *(undefined4 *)(this + 0x160) = local_20;
    *(undefined4 *)(this + 0x164) = local_1c;
    uVar4 = DAT_001530cc;
    *(undefined4 *)(this + 0x16c) = 0x3e800000;
    uVar1 = DAT_001530d0;
    uVar3 = DAT_001530c4;
    *(undefined4 *)(this + 0x178) = uVar4;
    *(undefined4 *)(this + 0x168) = uVar1;
    *(undefined4 *)(this + 0x17c) = uVar3;
    *(undefined4 *)(this + 0x180) = DAT_001530b4;
    uVar3 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar4 = __divsf3(uVar3,uVar1);
    uVar3 = DAT_001530d4;
    *(undefined4 *)(this + 0x1d8) = uVar4;
    *(undefined4 *)(this + 0x188) = uVar3;
    *(undefined4 *)(this + 0x18c) = 0x3e800000;
    *(undefined4 *)(this + 400) = DAT_001530d8;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0x3f800000;
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    (**(code **)(*(int *)this + 0x214))(this,1);
  }
  return iVar2 != 0;
}


