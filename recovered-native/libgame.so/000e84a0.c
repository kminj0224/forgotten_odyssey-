/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e84a0  Symbol: Lode_File */

/* ReinforcementLayer::Lode_File() */

void ReinforcementLayer::Lode_File(void)

{
  int *in_r0;
  undefined4 uVar1;
  int *piVar2;
  CCArray *this;
  int iVar3;
  int iVar4;
  CCAction *pCVar5;
  code *pcVar6;
  uint uVar7;
  float in_s0;
  float fVar8;
  float extraout_s0;
  float in_s1;
  undefined8 uVar9;
  float extraout_s1;
  _ccColor4B local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  CCPoint local_28;
  int local_24;
  CCPoint aCStack_20 [12];
  
  local_29 = 0xb2;
  local_2c = (_ccColor4B)0x0;
  local_2b = 0;
  local_2a = 0;
  uVar1 = cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_2c,in_s0,in_s1);
  uVar9 = (**(code **)(*in_r0 + 0xcc))(in_r0,uVar1,0,0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  vDrawScript_Lode((char *)(DAT_000e8574 + 0xe84ea),(char *)(DAT_000e8578 + 0xe84ec),(CCNode *)in_r0
                   ,local_28,local_24,1,true,false);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,1);
  this = (CCArray *)(**(code **)(*piVar2 + 0x58))();
  iVar3 = cocos2d::CCArray::count(this);
  for (uVar7 = 0; (int)uVar7 < iVar3; uVar7 = uVar7 + 1) {
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar7);
    iVar4 = (**(code **)(*piVar2 + 0xa0))();
    if (iVar4 != -1) {
      fVar8 = (float)(**(code **)(*piVar2 + 0xec))(piVar2,0);
      pCVar5 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar8);
      cocos2d::CCNode::runAction((CCNode *)piVar2,pCVar5);
    }
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,1);
  pcVar6 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
  (*pcVar6)(piVar2,aCStack_20);
  return;
}


