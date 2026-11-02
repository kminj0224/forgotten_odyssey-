/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00109f68  Symbol: InitLayer */

/* Clear_Item_View_Layer::InitLayer(int, void*) */

void __thiscall
Clear_Item_View_Layer::InitLayer(Clear_Item_View_Layer *this,int param_1,void *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar10;
  float extraout_s1_00;
  int local_94;
  undefined local_80;
  undefined local_7f;
  undefined local_7e;
  undefined local_7c;
  undefined local_7b;
  undefined local_7a;
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  char acStack_50 [52];
  int local_1c;
  
  piVar7 = *(int **)(DAT_0010a130 + 0x109f74);
  local_1c = *piVar7;
  for (local_94 = 0; local_94 < param_1; local_94 = local_94 + 1) {
    iVar8 = *(int *)((int)param_2 + 4);
    if (iVar8 == 0) {
      pcVar1 = (char *)(DAT_0010a134 + 0x109f90);
    }
    else if (iVar8 == 1) {
      pcVar1 = (char *)(DAT_0010a138 + 0x109f9a);
    }
    else if (iVar8 == 2) {
      pcVar1 = (char *)(DAT_0010a13c + 0x109fa4);
    }
    else {
      pcVar1 = (char *)(DAT_0010a140 + 0x109faa);
    }
    piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar1);
    pcVar9 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_78,extraout_s0,extraout_s1);
    (*pcVar9)(piVar2,aCStack_78);
    pcVar9 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
    uVar4 = __floatsisf(local_94);
    uVar10 = __mulsf3(uVar4,*puVar3);
    cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar9)(piVar2,aCStack_70);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,5,local_94);
    if (*(int *)((int)param_2 + 0x10) == -1) {
      local_80 = 0xff;
      local_7f = 0x7f;
      local_7e = 0x7f;
      (**(code **)(*piVar2 + 0xf4))(piVar2,&local_80);
    }
    memset(acStack_50,0,0x32);
                    /* WARNING: Load size is inaccurate */
    iVar8 = *(int *)(*(int *)(DAT_0010a144 + 0x10a02e) + *param_2 * 0xc + 4);
    if (iVar8 != 0) {
      if (*param_2 == 0xa9) {
        pcVar1 = (char *)(DAT_0010a148 + 0x10a044);
        iVar6 = DAT_0010a14c + 0x10a046;
        iVar8 = DAT_0010a150 + 0x10a048;
      }
      else {
        pcVar1 = (char *)(DAT_0010a154 + 0x10a050);
        iVar6 = DAT_0010a158 + 0x10a052;
      }
      sprintf(acStack_50,pcVar1,iVar6,iVar8);
      piVar5 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
      pcVar9 = *(code **)(*piVar5 + 0x3c);
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
      __mulsf3(*puVar3,0x3f000000);
      iVar8 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar10 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar9)(piVar5,aCStack_68);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar5,0,0);
      if (*(int *)((int)param_2 + 0x10) == -1) {
        local_7c = 0xff;
        local_7b = 0x7f;
        local_7a = 0x7f;
        (**(code **)(*piVar5 + 0xf4))(piVar5);
      }
    }
    param_2 = (void *)((int)param_2 + 0x14);
  }
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_0010a15c + 0x10a0de));
  pcVar9 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_60,extraout_s0_00,extraout_s1_00);
  uVar10 = (*pcVar9)(piVar2,aCStack_60);
  pcVar9 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar9)(piVar2,aCStack_58);
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,DAT_0010a164,DAT_0010a164);
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


