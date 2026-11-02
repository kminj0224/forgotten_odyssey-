/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8940  Symbol: Lode_File3 */

/* ReinforcementLayer::Lode_File3(int, void*) */

void __thiscall ReinforcementLayer::Lode_File3(ReinforcementLayer *this,int param_1,void *param_2)

{
  int *piVar1;
  CCArray *this_00;
  int iVar2;
  CCAction *pCVar3;
  CCNode *this_01;
  int *piVar4;
  CCDirector *this_02;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar10;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined8 uVar11;
  CCPoint local_a8;
  int local_a4;
  CCPoint aCStack_a0 [8];
  CCSize aCStack_98 [2];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  piVar6 = *(int **)(DAT_000e8b10 + 0xe894c);
  local_1c = *piVar6;
  memset(acStack_80,0,100);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,extraout_s0,extraout_s1);
  vDrawScript_Lode((char *)(DAT_000e8b18 + 0xe897a),(char *)(DAT_000e8b1c + 0xe897c),(CCNode *)this,
                   local_a8,local_a4,1,true,false);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  this_00 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = cocos2d::CCArray::count(this_00);
  for (uVar9 = 0; (int)uVar9 < iVar2; uVar9 = uVar9 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar9);
    iVar5 = (**(code **)(*piVar1 + 0xa0))();
    if (iVar5 != -1) {
      fVar10 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0);
      pCVar3 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar10);
      cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar3);
    }
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a0,extraout_s0_00,extraout_s1_00);
  (*pcVar7)(piVar1,aCStack_a0);
                    /* WARNING: Load size is inaccurate */
  sprintf(acStack_80,(char *)(DAT_000e8b30 + 0xe8a0e),
          *(undefined4 *)(*param_2 * 0xc + *(int *)(DAT_000e8b2c + 0xe8a04)),
          *(undefined4 *)((int)param_2 + 8));
  fVar10 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_98,extraout_s0_01,extraout_s1_01);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_80,aCStack_98,1,(char *)(DAT_000e8b3c + 0xe8a26),fVar10);
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_90,extraout_s0_02,extraout_s1_02);
  (*pcVar7)(piVar1,aCStack_90);
  this_01 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(this_01,0);
  iVar2 = DAT_000e8b48;
  (**(code **)(*piVar4 + 0xc4))(piVar4,piVar1);
  piVar1 = (int *)operator_new(0x208);
  cocos2d::CCParticleSystem::CCParticleSystem((CCParticleSystem *)piVar1);
  iVar5 = *(int *)(DAT_000e8b4c + 0xe8a78);
  *piVar1 = iVar5 + 8;
  piVar1[0x3f] = iVar5 + 0x24c;
  iVar5 = DAT_000e8b50;
  piVar1[0x7f] = 0;
  piVar1[0x80] = 0;
  cocos2d::CCParticleSystem::initWithFile((CCParticleSystem *)piVar1,(char *)(iVar5 + 0xe8a9e));
  puVar8 = *(undefined4 **)(iVar2 + 0xe8a7e);
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  __mulsf3(*puVar8,0x3f000000);
  uVar11 = __mulsf3(puVar8[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar7)(piVar1,aCStack_88);
  (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
  this_02 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  fVar10 = (float)cocos2d::CCDirector::getContentScaleFactor(this_02);
  cocos2d::CCNode::setScale((CCNode *)piVar1,fVar10);
  cocos2d::CCObject::release((CCObject *)piVar1);
  *(undefined4 *)(this + 0x110) = 3;
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


