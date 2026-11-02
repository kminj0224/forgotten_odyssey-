/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c668  Symbol: noticeWithSkillReset */

/* New_Notice::noticeWithSkillReset(int, int) */

void __thiscall New_Notice::noticeWithSkillReset(New_Notice *this,int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  _ccColor3B _Var3;
  undefined8 uVar4;
  undefined4 in_stack_ffffff90;
  undefined uVar5;
  undefined auStack_58 [4];
  undefined2 local_54;
  undefined2 local_50;
  char *local_4c;
  undefined auStack_48 [4];
  char *local_44;
  undefined auStack_40 [4];
  undefined auStack_3c [4];
  CCPoint local_38;
  CCPoint local_34;
  char *local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  char *local_20;
  int local_1c;
  
  uVar5 = (undefined)((uint)in_stack_ffffff90 >> 0x18);
  pcVar2 = (char *)(*(int *)(DAT_0011c7a8 + 0x11c674) + 0xc);
  local_4c = pcVar2;
  FUN_001eed40(auStack_48,DAT_0011c7ac + 0x11c680,auStack_58);
  local_44 = pcVar2;
  if (param_1 == 1) {
    iVar1 = DAT_0011c7b0 + 0x11c694;
  }
  else if (param_1 == 2) {
    iVar1 = DAT_0011c7b4 + 0x11c69e;
  }
  else if (param_1 == 3) {
    iVar1 = DAT_0011c7b8 + 0x11c6a8;
  }
  else if (param_1 == 4) {
    iVar1 = DAT_0011c7bc + 0x11c6b2;
  }
  else {
    if (param_1 != 5) goto LAB_0011c6c0;
    iVar1 = DAT_0011c7c0 + 0x11c6bc;
  }
  FUN_001ed9dc(&local_4c,iVar1);
LAB_0011c6c0:
  FUN_001ee80c(auStack_40,&local_4c);
  FUN_001ee6cc(auStack_40,auStack_48);
  FUN_001ee874(&local_44,auStack_40);
  uVar4 = FUN_001ed6b8(auStack_40);
  pcVar2 = local_44;
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  local_54 = 0xffff;
  _Var3 = DAT_0011c7cc + 0x11c70c;
  iVar1 = CONCAT22((short)(CONCAT13(uVar5,0xff0000) >> 0x10),0xffff);
  uVar4 = vDrawString((CCNode *)this,pcVar2,local_38,local_34,local_30,local_2c,_Var3,0xb,iVar1);
  uVar5 = (undefined)((uint)iVar1 >> 0x18);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  local_50 = 0xffff;
  vDrawString((CCNode *)this,(char *)(DAT_0011c7d4 + 0x11c760),local_28,local_24,local_20,local_1c,
              _Var3,0xb,CONCAT22((short)(CONCAT13(uVar5,0xff0000) >> 0x10),0xffff));
  FUN_001ee80c(auStack_3c,&local_4c);
  BaceImg((basic_string)this);
  FUN_001ed6b8(auStack_3c);
  noticeOKorNO();
  *(int *)(this + 0x114) = param_2;
  FUN_001ed6b8(&local_44);
  FUN_001ed6b8(auStack_48);
  FUN_001ed6b8(&local_4c);
  return;
}


