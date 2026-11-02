/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ceb0  Symbol: Slot_UI_Call */

/* MainMenuLayer::Slot_UI_Call() */

void MainMenuLayer::Slot_UI_Call(void)

{
  int *in_r0;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CCAction *pCVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  float in_s0;
  float fVar9;
  float in_s1;
  undefined8 uVar10;
  _ccColor4B local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  local_3c = (_ccColor4B)0x0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0x7f;
  piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_3c,in_s0,in_s1);
  iVar7 = *piVar1;
  iVar8 = *(int *)(DAT_0012d028 + 0x12ced6);
  pcVar6 = *(code **)(iVar7 + 0x3c);
  uVar2 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
  iVar7 = (**(code **)(iVar7 + 0x7c))(piVar1);
  uVar3 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
  uVar10 = __subsf3(uVar2,uVar3);
  cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar6)(piVar1,aCStack_38);
  (**(code **)(*in_r0 + 0xcc))(in_r0,piVar1,0xe,0xe);
  uVar10 = (**(code **)(*piVar1 + 0x38))(piVar1);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pCVar4 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,DAT_0012d02c);
  cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar4);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d030 + 0x12cf48));
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar2 = __mulsf3(*puVar5,0x3f000000);
  __addsf3(uVar2,DAT_0012d034);
  uVar2 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_0012d038);
  iVar7 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar3 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
  uVar10 = __subsf3(uVar2,uVar3);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar6)(piVar1,aCStack_28);
  (**(code **)(*in_r0 + 0xcc))(in_r0,piVar1,0xf,0xf);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d03c + 0x12cfb4));
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar2 = __mulsf3(*puVar5,0x3f000000);
  __addsf3(uVar2,DAT_0012d040);
  uVar2 = __subsf3(*(undefined4 *)(iVar8 + 4),DAT_0012d038);
  iVar7 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar3 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
  uVar10 = __subsf3(uVar2,uVar3);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar6)(piVar1,aCStack_20);
  (**(code **)(*in_r0 + 0xcc))(in_r0,piVar1,0x10,0x10);
  return;
}


