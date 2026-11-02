/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012e500  Symbol: Option_UI_Call */

/* MainMenuLayer::Option_UI_Call() */

void __thiscall MainMenuLayer::Option_UI_Call(MainMenuLayer *this)

{
  int *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  CCAction *pCVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  this_00 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012e5b8 + 0x12e50c));
  pcVar6 = *(code **)(*this_00 + 0x3c);
  puVar1 = (undefined4 *)(**(code **)(*this_00 + 0x7c))();
  uVar2 = __mulsf3(*puVar1,0x3f000000);
  __addsf3(uVar2,DAT_0012e5bc);
  uVar2 = __subsf3(*(undefined4 *)(*(int *)(DAT_0012e5c0 + 0x12e534) + 4),DAT_0012e5c4);
  iVar3 = (**(code **)(*this_00 + 0x7c))(this_00);
  uVar4 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
  uVar8 = __subsf3(uVar2,uVar4);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar6)(this_00,aCStack_28);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,7,7);
  puVar1 = (undefined4 *)(**(code **)(*this_00 + 0x38))(this_00);
  __subsf3(*puVar1,DAT_0012e5c8);
  uVar8 = (**(code **)(*this_00 + 0x38))(this_00);
  fVar7 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  pCVar5 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar7,DAT_0012e5cc);
  cocos2d::CCNode::runAction((CCNode *)this_00,pCVar5);
  Draw_Sound_Icon(this,(CCNode *)this_00);
  return;
}


