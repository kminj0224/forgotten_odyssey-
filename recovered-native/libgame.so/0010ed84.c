/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ed84  Symbol: SetTimer */

/* New_UI::SetTimer(int) */

void __thiscall New_UI::SetTimer(New_UI *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  code *pcVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar6;
  float extraout_s1;
  undefined8 uVar7;
  float extraout_s1_00;
  float extraout_s1_01;
  CCPoint aCStack_48 [8];
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28 [20];
  
  uVar1 = DAT_0010ee78;
  *(undefined4 *)(this + 0x13c) = DAT_0010ee78;
  *(undefined4 *)(this + 0x140) = uVar1;
  *(undefined4 *)(this + 0x144) = uVar1;
  *(undefined4 *)(this + 0x138) = 0;
  uVar1 = __floatsisf(param_1);
  *(undefined4 *)(this + 0x134) = uVar1;
  piVar2 = (int *)cocos2d::CCLayer::node();
  pcVar5 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_48,extraout_s0,extraout_s1);
  (*pcVar5)(piVar2,aCStack_48);
  uVar7 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,0x2e,0x2e);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawNumber((CCNode *)piVar2,0,local_40,local_3c,0xf,2,1);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2e);
  iVar4 = cocos2d::CCNode::getChildByTag(pCVar3,1);
  *(undefined *)(iVar4 + 0x112) = 1;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,extraout_s0_00,extraout_s1_00);
  vDrawNumber((CCNode *)piVar2,0,local_38,local_34,0xf,2,2);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2e);
  iVar4 = cocos2d::CCNode::getChildByTag(pCVar3,2);
  *(undefined *)(iVar4 + 0x112) = 1;
  uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0_01,extraout_s1_01);
  cocos2d::CCPoint::CCPoint(local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  fVar6 = (float)vDrawImage((CCNode *)piVar2,(char *)(DAT_0010ee8c + 0x10ee60),local_30,local_2c,-1,
                            0xffffffff);
  cocos2d::CCNode::schedule((CCNode *)this,(_func_void_float *)0x10,fVar6);
  return;
}


