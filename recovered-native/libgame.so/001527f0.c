/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001527f0  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleMeteor::initWithTotalParticles(unsigned int) */

bool __thiscall
cocos2d::CCParticleMeteor::initWithTotalParticles(CCParticleMeteor *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar2 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x154) = DAT_0015294c;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    *(undefined4 *)(this + 0x108) = local_28;
    *(undefined4 *)(this + 0x10c) = local_24;
    uVar4 = DAT_00152958;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x110) = uVar4;
    uVar4 = DAT_0015295c;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x114) = uVar4;
    uVar4 = DAT_00152960;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x170) = uVar4;
    *(undefined4 *)(this + 0x174) = DAT_00152964;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar3 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_30,0x3f000000);
    uVar5 = __mulsf3(local_2c,0x3f000000);
    CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    (*pcVar3)(this,aCStack_20);
    uVar4 = *(undefined4 *)(DAT_00152968 + 0x15288e);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(DAT_00152968 + 0x15288a);
    *(undefined4 *)(this + 0x164) = uVar4;
    *(undefined4 *)(this + 0x168) = 0x40000000;
    uVar1 = DAT_00152970;
    *(undefined4 *)(this + 0x178) = DAT_0015296c;
    uVar4 = DAT_0015294c;
    *(undefined4 *)(this + 0x16c) = 0x3f800000;
    *(undefined4 *)(this + 0x17c) = uVar1;
    *(undefined4 *)(this + 0x180) = uVar4;
    uVar4 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar4 = __mulsf3(uVar4,0x3f000000);
    *(undefined4 *)(this + 0x1d8) = uVar4;
    uVar1 = DAT_00152978;
    uVar4 = DAT_00152974;
    *(undefined4 *)(this + 0x188) = DAT_00152974;
    *(undefined4 *)(this + 0x18c) = uVar1;
    *(undefined4 *)(this + 400) = DAT_0015297c;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = uVar4;
    *(undefined4 *)(this + 0x1a4) = DAT_00152980;
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


