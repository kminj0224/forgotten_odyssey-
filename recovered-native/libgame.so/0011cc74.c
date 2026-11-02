/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011cc74  Symbol: BaceImg */

/* New_Notice::BaceImg(std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int) */

void __thiscall
New_Notice::BaceImg(New_Notice *this,basic_string param_1,basic_string param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  char *pcVar7;
  float fVar8;
  undefined8 uVar9;
  _ccColor4B local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  local_3c = (_ccColor4B)0x0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0x7f;
  uVar1 = cocos2d::CCLayerColor::layerWithColor(&local_3c);
  uVar9 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,0,0);
  uVar9 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  fVar8 = (float)vDrawFrame((CCNode *)this,(char *)(DAT_0011cdb8 + 0x11ccc8),local_38,local_34,
                            local_30,local_2c);
  pcVar7 = (char *)(DAT_0011cdbc + 0x11ccde);
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString(*(char **)param_1,pcVar7,fVar8);
  pcVar6 = *(code **)(*piVar2 + 0x3c);
  iVar3 = (**(code **)(*piVar2 + 0x7c))();
  uVar1 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
  uVar9 = __addsf3(uVar1,DAT_0011cdc4);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar2,aCStack_28);
  pcVar6 = *(code **)(*piVar2 + 0xf4);
  KG_getItemClassColor(param_3);
  (*pcVar6)(piVar2);
  fVar8 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar2,0xc,0xc);
  piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString(*(char **)param_2,pcVar7,fVar8);
  pcVar6 = *(code **)(*piVar4 + 0x3c);
  iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar1 = __subsf3(DAT_0011cdc4,*(undefined4 *)(iVar3 + 4));
  iVar3 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar5 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
  uVar9 = __addsf3(uVar1,uVar5);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar4,aCStack_20);
  (**(code **)(*(int *)this + 0xcc))(this,piVar4,0xd,0xd);
  return;
}


