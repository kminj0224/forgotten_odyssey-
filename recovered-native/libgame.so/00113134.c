/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00113134  Symbol: Set_Dust_Particle */

/* Set_Dust_Particle(cocos2d::CCLayer*, cocos2d::CCPoint, int, int, float, float, int) */

undefined4
Set_Dust_Particle(CCLayer *param_1,CCPoint param_2,int param_3,int param_4,float param_5,
                 float param_6,int param_7)

{
  CCObject *this;
  undefined4 uVar1;
  int iVar2;
  Effect *this_00;
  CCLayer *pCVar3;
  CCSprite *pCVar4;
  CCObject **ppCVar5;
  int iVar6;
  undefined4 extraout_s0;
  undefined8 uVar7;
  undefined4 extraout_s1;
  float extraout_s2;
  int in_stack_0000000c;
  
  uVar7 = CONCAT44(param_6,param_5);
  ppCVar5 = *(CCObject ***)(DAT_001131c0 + 0x113140);
  if (*ppCVar5 == (CCObject *)0x0) {
    this = (CCObject *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001131c4 + 0x113152));
    *ppCVar5 = this;
    uVar7 = cocos2d::CCObject::retain(this);
  }
  uVar1 = 0;
  for (iVar6 = 0; iVar6 < in_stack_0000000c; iVar6 = iVar6 + 1) {
    this_00 = *(Effect **)(**(int **)(DAT_001131c8 + 0x11316a) + DAT_001131cc);
    pCVar3 = **(CCLayer ***)(DAT_001131d0 + 0x11317c);
    pCVar4 = (CCSprite *)*ppCVar5;
    iVar2 = __fixsfsi((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_3);
    uVar7 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
    uVar1 = Effect::Effect_Body_Draw
                      (this_00,pCVar3,pCVar4,(float)uVar7,param_2,iVar2,DAT_001131d4,param_4,param_7
                       ,(float)((ulonglong)uVar7 >> 0x20),extraout_s2);
    uVar7 = CONCAT44(extraout_s1,extraout_s0);
  }
  return uVar1;
}


