/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d248  Symbol: FUN_0013d248 */

void FUN_0013d248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float __x;
  float __x_00;
  float __y;
  float __y_00;
  
  uVar1 = __subsf3(0x3f800000,param_4);
  uVar7 = DAT_0013d2e4;
  uVar5 = uVar1;
  powf(__x,__y);
  uVar2 = __mulsf3(uVar1,uVar1);
  uVar3 = __mulsf3(param_4,param_4);
  uVar4 = param_4;
  powf(__x_00,__y_00);
  uVar5 = __mulsf3(uVar5,0);
  uVar6 = __mulsf3(param_4,uVar7);
  uVar2 = __mulsf3(uVar6,uVar2);
  uVar2 = __mulsf3(uVar2,param_1);
  uVar5 = __addsf3(uVar5,uVar2);
  uVar7 = __mulsf3(uVar3,uVar7);
  uVar7 = __mulsf3(uVar7,uVar1);
  uVar7 = __mulsf3(uVar7,param_2);
  uVar7 = __addsf3(uVar5,uVar7);
  uVar5 = __mulsf3(uVar4,param_3);
  __addsf3(uVar7,uVar5);
  return;
}


