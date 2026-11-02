/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ca3c  Symbol: noticeWithCoupon */

/* New_Notice::noticeWithCoupon(int, int) */

void __thiscall New_Notice::noticeWithCoupon(New_Notice *this,int param_1,int param_2)

{
  CCSpriteFrameCache *this_00;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 in_stack_ffffff88;
  undefined uVar13;
  int local_44;
  undefined auStack_40 [4];
  _ccColor4B local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint local_28;
  CCPoint local_24;
  char *local_20;
  int local_1c;
  
  uVar13 = (undefined)((uint)in_stack_ffffff88 >> 0x18);
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar5 = DAT_0011cc4c;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_0011cc48 + 0x11ca52));
  **(undefined4 **)(DAT_0011cc50 + 0x11ca5e) = 0;
  local_44 = *(int *)(DAT_0011cc54 + 0x11ca6a) + 0xc;
  FUN_001ee80c(auStack_40,&local_44);
  BaceImg((basic_string)this);
  uVar12 = FUN_001ed6b8(auStack_40);
  local_3c = (_ccColor4B)0xff;
  local_3b = 0xff;
  local_3a = 0xff;
  local_39 = 0xff;
  piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_3c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  iVar9 = *piVar1;
  puVar10 = *(undefined4 **)(iVar5 + 0x11ca64);
  pcVar7 = *(code **)(iVar9 + 0x3c);
  uVar2 = __mulsf3(*puVar10,0x3f000000);
  puVar3 = (undefined4 *)(**(code **)(iVar9 + 0x7c))(piVar1);
  uVar4 = __mulsf3(*puVar3,0x3f000000);
  __subsf3(uVar2,uVar4);
  uVar2 = __mulsf3(puVar10[1],0x3f000000);
  iVar5 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar4 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  uVar2 = __subsf3(uVar2,uVar4);
  uVar12 = __addsf3(uVar2,DAT_0011cc60);
  cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar7)(piVar1,aCStack_38);
  fVar11 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar1,7,7);
  pcVar8 = (char *)(DAT_0011cc64 + 0x11cb20);
  piVar6 = (int *)cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder
                            ((char *)(DAT_0011cc68 + 0x11cb24),pcVar8,fVar11);
  pcVar7 = *(code **)(*piVar6 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*puVar3,0x3f000000);
  iVar5 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar12 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar7)(piVar6,aCStack_30);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar6,1,1);
  (**(code **)(*piVar6 + 0x140))(piVar6);
  (**(code **)(*piVar6 + 0xf4))(piVar6);
  __mulsf3(*puVar10,0x3f000000);
  uVar2 = __mulsf3(puVar10[1],0x3f000000);
  iVar5 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar4 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  uVar12 = __subsf3(uVar2,uVar4);
  uVar12 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  vDrawString((CCNode *)this,(char *)(DAT_0011cc70 + 0x11cbfe),local_28,local_24,local_20,local_1c,
              (_ccColor3B)pcVar8,0xb,CONCAT13(uVar13,0xffffff));
  if (param_2 == 0) {
    noticeOK();
  }
  else {
    noticeOKorNO();
  }
  *(int *)(this + 0x114) = param_1;
  FUN_001ed6b8(&local_44);
  return;
}


