/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001520b8  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleRain::initWithTotalParticles(unsigned int) */

bool __thiscall cocos2d::CCParticleRain::initWithTotalParticles(CCParticleRain *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  CCPoint aCStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  if (iVar3 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_00152200;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_30;
    *(undefined4 *)(this + 0x10c) = local_2c;
    *(undefined4 *)(this + 0x110) = DAT_0015220c;
    uVar1 = DAT_00152210;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x114) = uVar1;
    uVar1 = DAT_00152214;
    *(undefined4 *)(this + 0x124) = 0x3f800000;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x170) = uVar1;
    uVar1 = DAT_00152218;
    *(undefined4 *)(this + 0x11c) = 0x3f800000;
    *(undefined4 *)(this + 0x174) = uVar1;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar5 = *(code **)(*(int *)this + 0x3c);
    uVar4 = __mulsf3(local_38,0x3f000000);
    CCPoint::CCPoint(aCStack_28,extraout_s0_00,extraout_s1_00);
    uVar6 = (*pcVar5)(this,aCStack_28);
    CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    *(undefined4 *)(this + 0x160) = local_20;
    *(undefined4 *)(this + 0x164) = local_1c;
    *(undefined4 *)(this + 0x168) = DAT_0015221c;
    *(undefined4 *)(this + 0x178) = 0x40800000;
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined4 *)(this + 0x17c) = 0x40000000;
    *(undefined4 *)(this + 0x180) = DAT_00152200;
    *(undefined4 *)(this + 0x1d8) = DAT_00152220;
    uVar1 = DAT_00152224;
    *(undefined4 *)(this + 0x188) = DAT_00152224;
    uVar2 = DAT_00152228;
    *(undefined4 *)(this + 0x18c) = DAT_00152228;
    *(undefined4 *)(this + 400) = 0x3f800000;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = uVar1;
    *(undefined4 *)(this + 0x1ac) = uVar2;
    *(undefined4 *)(this + 0x1b0) = 0x3f800000;
    *(undefined4 *)(this + 0x1b4) = 0x3f000000;
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    pcVar5 = *(code **)(*(int *)this + 0x214);
    (*pcVar5)(this,0,*(int *)this,pcVar5,uVar4);
  }
  return iVar3 != 0;
}


