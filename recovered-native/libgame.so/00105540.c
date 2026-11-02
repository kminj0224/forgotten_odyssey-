/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105540  Symbol: Level_init */

/* Level::Level_init(char const*, cocos2d::CCPoint, int, int, int) */

Level * __thiscall
Level::Level_init(Level *this,char *param_1,CCPoint param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  int in_stack_00000008;
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCRect aCStack_78 [4];
  CCRect aCStack_68 [4];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [4];
  CCRect aCStack_38 [4];
  CCRect aCStack_28 [5];
  
  if (in_stack_00000008 < 10) {
    uVar10 = __floatsisf(in_stack_00000008 * 0xd);
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_78,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),extraout_s2,
               extraout_s3);
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_78);
    pcVar9 = *(code **)(*piVar1 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
    uVar3 = __addsf3(param_2,*puVar2);
    __mulsf3(uVar3,0x3f000000);
    iVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar3 = __subsf3(param_3 + -0x80000000,*(undefined4 *)(iVar4 + 4));
    uVar10 = __mulsf3(uVar3,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar9)(piVar1,aCStack_a8);
    pcVar9 = *(code **)(*(int *)this + 0xcc);
  }
  else {
    if (in_stack_00000008 < 100) {
      uVar10 = __floatsidf(in_stack_00000008);
      __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_001058f0,DAT_001058f4);
      iVar4 = __fixdfsi();
      uVar10 = __floatsisf(iVar4 * 0xd);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_68,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                 extraout_s2_00,extraout_s3_00);
      piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_68);
      pcVar9 = *(code **)(*piVar6 + 0x3c);
      puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
      uVar3 = __addsf3(param_2,*puVar2);
      __mulsf3(uVar3,0x3f000000);
      iVar4 = (**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __subsf3(param_3 + -0x80000000,*(undefined4 *)(iVar4 + 4));
      uVar10 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar9)(piVar6,aCStack_a0);
      (**(code **)(*(int *)this + 0xcc))(this,piVar6,param_4,param_5);
      iVar4 = __divsi3(in_stack_00000008,10);
      uVar10 = __floatsisf(iVar4 * 0xd);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_58,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                 extraout_s2_01,extraout_s3_01);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_58);
      pcVar9 = *(code **)(*piVar1 + 0x3c);
      puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __addsf3(param_2,*puVar2);
      uVar3 = __mulsf3(uVar3,0x3f000000);
      __addsf3(uVar3,DAT_00105908);
      iVar4 = (**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __subsf3(param_3 + -0x80000000,*(undefined4 *)(iVar4 + 4));
      uVar10 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar9)(piVar1,aCStack_98);
    }
    else {
      if (DAT_0010590c < in_stack_00000008) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_00105918 + 0x1058e6));
      }
      uVar10 = __floatsidf(in_stack_00000008);
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      __muldf3((int)uVar10,uVar3,DAT_001058f8,DAT_001058fc);
      iVar4 = __fixdfsi();
      __muldf3((int)uVar10,uVar3,DAT_001058f0,DAT_001058f4);
      iVar5 = __fixdfsi();
      iVar5 = iVar5 + iVar4 * -10;
      uVar10 = __floatsisf(iVar4 * 0xd);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_48,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                 extraout_s2_02,extraout_s3_02);
      piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_48);
      pcVar9 = *(code **)(*piVar6 + 0x3c);
      puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
      uVar3 = __addsf3(param_2,*puVar2);
      uVar3 = __mulsf3(uVar3,0x3f000000);
      __subsf3(uVar3,0x40000000);
      iVar8 = param_3 + -0x80000000;
      iVar7 = (**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __subsf3(iVar8,*(undefined4 *)(iVar7 + 4));
      uVar10 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar9)(piVar6,aCStack_90);
      (**(code **)(*(int *)this + 0xcc))(this,piVar6,param_4,param_5);
      uVar10 = __floatsisf(iVar5 * 0xd);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                 extraout_s2_03,extraout_s3_03);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_38);
      pcVar9 = *(code **)(*piVar1 + 0x3c);
      puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __addsf3(param_2,*puVar2);
      uVar3 = __mulsf3(uVar3,0x3f000000);
      __addsf3(uVar3,DAT_00105910);
      iVar7 = (**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __subsf3(iVar8,*(undefined4 *)(iVar7 + 4));
      uVar10 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar9)(piVar1,aCStack_88);
      (**(code **)(*(int *)this + 0xcc))(this,piVar1,param_4,param_5);
      uVar10 = __floatsisf((in_stack_00000008 + iVar5 * -10 + iVar4 * -100) * 0xd);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),
                 extraout_s2_04,extraout_s3_04);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(param_1,aCStack_28);
      pcVar9 = *(code **)(*piVar1 + 0x3c);
      puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __addsf3(param_2,*puVar2);
      uVar3 = __mulsf3(uVar3,0x3f000000);
      __addsf3(uVar3,DAT_00105914);
      iVar4 = (**(code **)(*piVar6 + 0x7c))(piVar6);
      uVar3 = __subsf3(iVar8,*(undefined4 *)(iVar4 + 4));
      uVar10 = __mulsf3(uVar3,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      (*pcVar9)(piVar1,aCStack_80);
    }
    pcVar9 = *(code **)(*(int *)this + 0xcc);
  }
  (*pcVar9)(this,piVar1,param_4,param_5);
  return this;
}


