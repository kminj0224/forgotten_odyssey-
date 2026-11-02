/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d40a0  Symbol: Draw_Money_Icon */

/* In_App_Layer::Draw_Money_Icon(cocos2d::CCNode*, bool) */

undefined8 In_App_Layer::Draw_Money_Icon(CCNode *param_1,bool param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  CCNode **this;
  int in_r2;
  code *pcVar4;
  undefined8 uVar5;
  CCNode *pCStack_20;
  int *piStack_1c;
  CCNode *apCStack_18 [2];
  
  piVar3 = (int *)(uint)param_2;
  this = &pCStack_20;
  pCStack_20 = param_1;
  piStack_1c = piVar3;
  if (in_r2 == 0) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d4124 + 0xd40dc));
    pcVar4 = *(code **)(*piVar1 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
    uVar5 = __subsf3(*puVar2,DAT_000d411c);
    cocos2d::CCPoint::CCPoint((CCPoint *)apCStack_18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
    ;
    this = apCStack_18;
  }
  else {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d4118 + 0xd40ae));
    pcVar4 = *(code **)(*piVar1 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
    uVar5 = __subsf3(*puVar2,DAT_000d411c);
    cocos2d::CCPoint::CCPoint((CCPoint *)this,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  }
  (*pcVar4)(piVar1,this);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar1,0xb,0xb);
  return CONCAT44(piStack_1c,pCStack_20);
}


