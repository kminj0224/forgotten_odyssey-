/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000db840  Symbol: UI_Loding */

/* Market_Equip::UI_Loding() */

void __thiscall Market_Equip::UI_Loding(Market_Equip *this)

{
  int *piVar1;
  CCNode *this_00;
  undefined4 uVar2;
  code *pcVar3;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar4;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [8];
  CCPoint local_18;
  int local_14;
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000db8e8 + 0xdb84c));
  pcVar3 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0,extraout_s1);
  uVar4 = (*pcVar3)(piVar1,aCStack_28);
  pcVar3 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  (*pcVar3)(piVar1,aCStack_20);
  uVar4 = (**(code **)(*(int *)this + 0xcc))(this,piVar1,0x66,0x66);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  vDrawScript((char *)(DAT_000db8f8 + 0xdb8a2),(char *)(DAT_000db8fc + 0xdb8a6),(CCNode *)this,
              local_18,local_14,0);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  uVar2 = cocos2d::CCNode::getChildByTag(this_00,3);
  **(undefined4 **)(DAT_000db900 + 0xdb8c0) = uVar2;
  uVar2 = cocos2d::CCSprite::spriteWithFile((char *)(DAT_000db904 + 0xdb8c8));
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,uVar2,100,100);
  return;
}


