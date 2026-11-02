/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7edc  Symbol: Lode_File */

/* PayLayer::Lode_File() */

void __thiscall PayLayer::Lode_File(PayLayer *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar10;
  float extraout_s1_00;
  int local_98;
  int local_90;
  int local_8c;
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  char acStack_50 [52];
  int local_1c;
  
  iVar9 = DAT_000e812c + 0xe7eea;
  piVar8 = *(int **)(iVar9 + DAT_000e8130);
  local_1c = *piVar8;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000e8134 + 0xe7ef2));
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_80,extraout_s0,extraout_s1);
  uVar10 = (*pcVar7)(piVar1,aCStack_80);
  pcVar7 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar7)(piVar1,aCStack_78);
  (**(code **)(*(int *)this + 0xcc))(this,piVar1,DAT_000e813c,DAT_000e813c);
  local_98 = 0x97;
  local_8c = 0;
  local_90 = 0;
  do {
    if (*(int *)(*(int *)(iVar9 + DAT_000e8140) + local_98 * 0x18) != 0) {
      piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000e8144 + 0xe7f74))
      ;
      pcVar7 = *(code **)(*piVar1 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_70,extraout_s0_00,extraout_s1_00);
      (*pcVar7)(piVar1,aCStack_70);
      pcVar7 = *(code **)(*piVar1 + 0x3c);
      __floatsisf(local_90 * 0x25);
      uVar10 = __floatsisf(local_8c * -0x25 + 0x25);
      cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar7)(piVar1,aCStack_68);
      (**(code **)(*(int *)this + 0xcc))(this,piVar1,local_90 + local_8c * 7,local_98 + -0x97);
      memset(acStack_50,0,0x32);
      sprintf(acStack_50,(char *)(DAT_000e8148 + 0xe7fee),DAT_000e8150 + 0xe7ff2,
              *(undefined4 *)(local_98 * 0xc + *(int *)(iVar9 + DAT_000e814c) + 4));
      piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
      if (piVar3 != (int *)0x0) {
        pcVar7 = *(code **)(*piVar3 + 0x3c);
        puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
        __mulsf3(*puVar4,0x3f000000);
        iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1);
        uVar10 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
        (*pcVar7)(piVar3,aCStack_60);
        (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,0,0);
        if (local_98 == 0x9f) {
          pcVar5 = (char *)(**(int **)(iVar9 + DAT_000e8154) + **(int **)(iVar9 + DAT_000e8158) * 9
                           + DAT_000e815c);
        }
        else {
          if (local_98 == 0xa0) {
            iVar6 = **(int **)(iVar9 + DAT_000e8154) + **(int **)(iVar9 + DAT_000e8158) * 9;
            iVar2 = DAT_000e8160;
          }
          else {
            if (local_98 != 0xa1) goto LAB_000e80ba;
            iVar6 = **(int **)(iVar9 + DAT_000e8154) + **(int **)(iVar9 + DAT_000e8158) * 9;
            iVar2 = DAT_000e8164;
          }
          pcVar5 = (char *)(iVar6 + iVar2);
        }
        if (*pcVar5 != '\0') {
          (**(code **)(*piVar3 + 0xec))(piVar3,0x7f);
        }
      }
LAB_000e80ba:
      local_90 = local_90 + 1;
    }
    if (local_98 == 0xb4) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e813c);
      pcVar7 = *(code **)(*piVar1 + 0x3c);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
      __addsf3(*puVar4,0x3f800000);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      iVar9 = (**(code **)(*piVar3 + 0x38))();
      uVar10 = __addsf3(*(undefined4 *)(iVar9 + 4),0x3f800000);
      cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar7)(piVar1,aCStack_58);
      if (local_1c == *piVar8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (6 < local_90) {
      local_90 = 0;
      local_8c = local_8c + 1;
    }
    local_98 = local_98 + 1;
  } while( true );
}


