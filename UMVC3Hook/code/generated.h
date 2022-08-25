#pragma once
#include "defaults.h"

//Generated using a python script.

/*

void UndefinedFunction_1400f2eb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 auStack40 [2];
  undefined8 auStack24 [2];

  if (param_1[0xd1e] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  lVar3 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x13);
  hook(0x14004bd30,param_1);
  lVar4 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x13);
  uVar5 = hookret(0x140056290,(longlong)param_1);
  if (((char)uVar5 != '\0') && (lVar4 == 0)) {
	if ((*(uint *)(param_1 + 0x2a2) & 1) == 0) {
	  if (lVar3 != 0) {
		uVar6 = hookret(0x140004740);
		plVar7 = hookret(0x140131310,uVar6,100,0x13,param_1,4,0xffffffff,&DAT_140d2acf0,&DAT_140d76030 ,4,3
							   ,(longlong *)0x0);
		if (plVar7 != (longlong *)0x0) {
		  (**(code **)(*plVar7 + 0xa8))(plVar7,param_1);
		  hook(0x1400604e0,(longlong)plVar7,param_1);
		  hook(0x140060360,(longlong)plVar7,0x200228e0);
		  plVar8 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar8,0xd,plVar7,0);
		}
		iVar2 = hookret(0x140004a40,(longlong)param_1);
		puVar9 = hookret(0x140004a50,(longlong)param_1,auStack40);
		puVar10 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar10,auStack24,puVar9,0xe,(longlong)iVar2,param_1,0,0x3f80000 0,
					  (longlong)param_1);
	  }
	}
	else {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0xfffffffe;
	}
  }
  hook(0x1400f33d0,(longlong)param_1);
  if ((param_1[0xd1e] != 0) && (*(int *)(param_1 + 0x262) == 0x89)) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if (plVar7 != (longlong *)0x0) {
	  bVar1 = hookret(0x140001b80,(longlong)plVar7);
	  if (bVar1 != false) {
		(**(code **)(*plVar7 + 0x78))(plVar7);
		param_1[0xd1e] = 0;
	  }
	}
  }
  return;



POSTCHARACTER();
}
void FUN_1400d4b30(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [4];

  if ((param_1[0xd20] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd20]), bVar1 == false)) {
	param_1[0xd20] = 0;
  }
  hook(0x14004bd30,param_1);
  hook(0x1400d2810,(longlong)param_1);
  if ((*(uint *)((longlong)param_1 + 0x14f4) & 0x2000) == 0) {
	*(undefined4 *)(param_1 + 0xd1e) = 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar3 != 0x28) && (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x29)) &&
	 (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x2a)) {
	return;
  }
  lVar4 = hookret(0x140001a90);
  cVar2 = hookret(0x140038a10,lVar4 + 0x38);
  if (cVar2 != '\0') {
	hookret(0x14000bf40,local_18,&DAT_140d76030);
	hookret(0x14000bf40,local_28,&DAT_140d76030);
	lVar4 = hookret(0x140004740);
	hook(0x140130fa0,lVar4,0x3ed,param_1,param_1,local_18,local_28,0);
  }
  return;



POSTCHARACTER();
}
void FUN_1400cdc90(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;

  plVar5 = param_1 + 0xd1f;
  lVar6 = 6;
  do {
	if ((*plVar5 != 0) && (bVar1 = hookret(0x140001b80,*plVar5), bVar1 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),7);
  hook(0x14004bd30,param_1);
  if ((lVar6 != 0) && (lVar6 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),7), lVar6 == 0)) {
	(**(code **)(*param_1 + 0x438))(param_1);
  }
  iVar3 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar3 == 7) {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x40000000;
  }
  lVar6 = hookret(0x140056010,(longlong)param_1,0xe);
  if (lVar6 == 0) {
	if ((*(uint *)(param_1 + 0x2a2) & 0x40000000) == 0) {
	  hookret(0x1400cd970,param_1,0xe);
	  goto LAB_1400cdd70;
	}
  }
  else if ((*(uint *)(param_1 + 0x2a2) & 0x40000000) == 0) goto LAB_1400cdd70;
  hook(0x1400ac630,(longlong)param_1,0xe);
LAB_1400cdd70:
  hook(0x1400ce1e0,(longlong)param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar3 != 0x28) && (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x29)) &&
	 (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x2a)) {
	return;
  }
  lVar6 = hookret(0x140001a90);
  cVar2 = hookret(0x140038a10,lVar6 + 0x38);
  if (cVar2 != '\0') {
	uVar4 = 0x80770e;
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) != 0) {
	  uVar4 = 0x8191ce;
	}
	hook(0x1400ce070,(longlong)param_1,uVar4,0);
  }
  return;



POSTCHARACTER();
}
void FUN_1400cd200(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;

  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	iVar1 = (**(code **)(*param_1 + 0x180))();
	if ((iVar1 == 0xe1) && ((*(byte *)(param_1 + 0x29f) & 0x20) != 0)) {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 4;
	}
  }
  hook(0x14004bd30,param_1);
  return;


POSTCHARACTER();
}
void FUN_1400ca240(longlong *param_1)

{
PRECHARACTER(param_1);;

  float fVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined6 extraout_var;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float extraout_XMM0_Da;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd1e]), bVar3 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd20] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd20]), bVar3 == false)) {
	param_1[0xd20] = 0;
  }
  if (((param_1[0xd1e] != 0) && (*(char *)((longlong)param_1 + 0x6909) == '\0')) &&
	 (uVar8 = hookret(0x140056290,(longlong)param_1), (char)uVar8 != '\0')) {
	(**(code **)(*(longlong *)param_1[0xd1e] + 0xe0))();
  }
  if ((param_1[0xd1e] != 0) && (iVar6 = (**(code **)(*param_1 + 0x180))(param_1), iVar6 == 0x1b8) ) {
	if ((param_1[0xd1e] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd1e]), bVar3 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar2 = (longlong *)param_1[0xd1e];
	if ((plVar2 != (longlong *)0x0) && (bVar3 = hookret(0x140001b80,(longlong)plVar2), bVar3 != false) ) {
	  (**(code **)(*plVar2 + 0x78))(plVar2);
	  param_1[0xd1e] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400caae0,(longlong)param_1);
  if (param_1[0xd20] == 0) {
	lVar9 = hookret(0x14004cab0,(longlong)param_1,0);
	uVar5 = hookret(0x140032f40,lVar9);
	if ((int)CONCAT62(extraout_var,uVar5) == 0x8d) {
	  hookret(0x1400ca7b0,param_1);
	}
  }
  iVar6 = 0;
  if (*(char *)((longlong)param_1 + 0x6914) == '\0') {
	hookret(0x14000cee0,(longlong)param_1);
	fVar1 = *(float *)(param_1 + 0xd22);
	*(float *)(param_1 + 0xd22) = fVar1 - extraout_XMM0_Da;
	if (fVar1 - extraout_XMM0_Da <= 0.0) {
	  lVar9 = hookret(0x140001a90);
	  iVar7 = hookret(0x140221120,lVar9);
	  if ((iVar7 != 1) && (iVar7 != 0xc)) {
		iVar7 = hookret(0x140004a40,(longlong)param_1);
		puVar10 = hookret(0x140004a50,(longlong)param_1,local_18);
		puVar11 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar11,local_28,puVar10,*(int *)((longlong)param_1 + 0x690c),
					  (longlong)iVar7,param_1,0,0x3f800000,(longlong)param_1);
	  }
	  if (*(int *)((longlong)param_1 + 0x690c) != 2) {
		iVar6 = *(int *)((longlong)param_1 + 0x690c) + 1;
	  }
	  *(int *)((longlong)param_1 + 0x690c) = iVar6;
	  iVar6 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar6 == 0) {
		*(undefined4 *)(param_1 + 0xd22) = 0x42800000;
	  }
	  else {
		if (0 < iVar6) {
		  if (iVar6 < 3) {
			*(undefined4 *)(param_1 + 0xd22) = 0x42380000;
			goto LAB_1400ca479;
		  }
		  if (iVar6 == 10) {
			*(undefined4 *)(param_1 + 0xd22) = 0x42b80000;
			goto LAB_1400ca479;
		  }
		}
		*(undefined4 *)(param_1 + 0xd22) = 0;
		*(undefined *)((longlong)param_1 + 0x6914) = 1;
	  }
	}
  }
LAB_1400ca479:
  (**(code **)(*param_1 + 0x418))(param_1);
  uVar8 = hookret(0x140056290,(longlong)param_1);
  *(char *)((longlong)param_1 + 0x6909) = (char)uVar8;
  iVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar6 == 0x28) || (iVar6 = (**(code **)(*param_1 + 0x180))(param_1), iVar6 == 0x29)) ||
	 (iVar6 = (**(code **)(*param_1 + 0x180))(param_1), iVar6 == 0x2a)) {
	lVar9 = hookret(0x140001a90);
	cVar4 = hookret(0x140038a10,lVar9 + 0x38);
	if (cVar4 != '\0') {
	  hookret(0x14000bf40,(undefined4 *)local_18,&DAT_140d76030);
	  hookret(0x14000bf40,(undefined4 *)local_28,&DAT_140d76030);
	  lVar9 = hookret(0x140004740);
	  hook(0x140130fa0,lVar9,0x3ed,param_1,param_1,(undefined4 *)local_18,(undefined4 *)local_28,0) ;
	}
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_1400c84f0(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined8 auStack88 [2];
  undefined8 auStack72 [2];
  undefined8 auStack56 [6];

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  if ((*(char *)(param_1 + 0xd24) != '\0') &&
	 (lVar6 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x1f), lVar6 == 0)) {
	if ((param_1[0xd23] != 0) && (bVar3 = hookret(0x140001b80,param_1[0xd23]), bVar3 == false)) {
	  param_1[0xd23] = 0;
	}
	plVar1 = (longlong *)param_1[0xd23];
	if ((plVar1 != (longlong *)0x0) && (bVar3 = hookret(0x140001b80,(longlong)plVar1), bVar3 != false) ) {
	  (**(code **)(*plVar1 + 0xd8))(plVar1);
	  param_1[0xd23] = 0;
	}
	*(undefined *)(param_1 + 0xd24) = 0;
	puVar7 = hookret(0x140004a50,(longlong)param_1,auStack88);
	puVar8 = hookret(0x140003aa0);
	hook(0x1402aa5e0,(longlong)puVar8,puVar7,0x22,0xffffffffffffffff);
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar4 != 0xe3) {
	return;
  }
  hook(0x14000cee0,(longlong)param_1);
  fVar10 = extraout_XMM0_Da + *(float *)(param_1 + 0xd27);
  *(float *)(param_1 + 0xd27) = fVar10;
  switch(*(undefined4 *)((longlong)param_1 + 0x693c)) {
  case 0:
	if (fVar10 <= 100.0) {
	  return;
	}
	iVar4 = 0x24;
	break;
  case 1:
	if (fVar10 <= 120.0) {
	  return;
	}
	iVar4 = 0x25;
	break;
  case 2:
	bVar3 = fVar10 == 140.0;
	bVar2 = fVar10 < 140.0;
	goto LAB_1400c8673;
  case 3:
	if (fVar10 <= 160.0) {
	  return;
	}
	iVar4 = 0x24;
	break;
  case 4:
	if (fVar10 <= 180.0) {
	  return;
	}
	iVar4 = 0x25;
	break;
  case 5:
	bVar3 = fVar10 == 200.0;
	bVar2 = fVar10 < 200.0;
LAB_1400c8673:
	if (bVar2 || bVar3) {
	  return;
	}
	iVar4 = 0x26;
	break;
  default:
	goto switchD_1400c8611_caseD_6;
  }
  pfVar9 = (float *)hookret(0x140001b50,(longlong)param_1);
  fVar10 = hookret(0x140455550,-1000.0,1000.0);
  fVar10 = fVar10 + pfVar9[2];
  fVar11 = hookret(0x140455550,-500.0,500.0);
  fVar11 = fVar11 + pfVar9[1];
  fVar12 = hookret(0x140455550,-1000.0,1000.0);
  hook(0x140001030,CONCAT44(extraout_XMM0_Db,fVar12 + *pfVar9),fVar12 + *pfVar9,fVar11,fVar10,
				(undefined4 *)auStack88);
  iVar5 = hookret(0x140004a40,(longlong)param_1);
  puVar7 = hookret(0x140004a50,(longlong)param_1,auStack72);
  puVar8 = hookret(0x140003aa0);
  hook(0x1402aab10,(longlong)puVar8,auStack56,puVar7,iVar4,(longlong)iVar5,(undefined4 *)auStack88,
				0x3f800000,(longlong)param_1);
  *(int *)((longlong)param_1 + 0x693c) = *(int *)((longlong)param_1 + 0x693c) + 1;
switchD_1400c8611_caseD_6:
  return;


POSTCHARACTER();
}
void FUN_1400c4c10(longlong *param_1)

{
PRECHARACTER(param_1);;

  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd26] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd26]), bVar2 == false)) {
	param_1[0xd26] = 0;
  }
  plVar5 = param_1 + 0xd1f;
  lVar4 = 2;
  do {
	if ((*plVar5 != 0) && (bVar2 = hookret(0x140001b80,*plVar5), bVar2 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar5 = param_1 + 0xd21;
  lVar4 = 5;
  do {
	if ((*plVar5 != 0) && (bVar2 = hookret(0x140001b80,*plVar5), bVar2 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar5 = param_1 + 0xd27;
  lVar4 = 3;
  do {
	if ((*plVar5 != 0) && (bVar2 = hookret(0x140001b80,*plVar5), bVar2 == false)) {
	  *plVar5 = 0;
	}
	plVar5 = plVar5 + 1;
	lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400c56b0,param_1);
	hook(0x1400c5ca0,(longlong)param_1);
	hook(0x14004d3e0,(longlong)param_1,(*(byte *)(param_1 + 0x2a2) & 2) != 0,0x6e);
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar3 == 6) && (fVar6 = (float)(**(code **)(*param_1 + 0x160))(param_1), 32.0 < fVar6))  &&
	   (fVar6 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar6 < 37.0)) {
	  uVar1 = (**(code **)(*param_1 + 0x158))(param_1);
	  hook(0x1400693a0,uVar1,(longlong)param_1,0x25);
	  *(uint *)((longlong)param_1 + 0x14f4) = *(uint *)((longlong)param_1 + 0x14f4) & 0xfffffeff;
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400be8f0(longlong *param_1)

{
PRECHARACTER(param_1);;

  float fVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float extraout_XMM0_Da;
  undefined4 uVar8;
  undefined8 local_38 [2];
  undefined8 local_28 [4];

  hook(0x14004bd30,param_1);
  if (param_1[0xd20] != 0) {
	bVar3 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar3 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400bcca0,(longlong)param_1);
	if ((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) {
	  hookret(0x140079c40,(longlong)param_1,0xe);
	}
	else {
	  hook(0x1400bcd00,param_1,0xe);
	}
	uVar8 = 0x3f800000;
	if (*(char *)((longlong)param_1 + 0x68fd) != '\0') {
	  lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x24);
	  if (lVar5 == 0) {
		if (param_1[0xd20] != 0) {
		  bVar3 = hookret(0x140001b80,param_1[0xd20]);
		  if (bVar3 == false) {
			param_1[0xd20] = 0;
		  }
		}
		plVar2 = (longlong *)param_1[0xd20];
		if (plVar2 != (longlong *)0x0) {
		  bVar3 = hookret(0x140001b80,(longlong)plVar2);
		  if (bVar3 != false) {
			(**(code **)(*plVar2 + 0xd8))(plVar2);
			param_1[0xd20] = 0;
		  }
		}
		*(undefined *)((longlong)param_1 + 0x68fd) = 0;
		(**(code **)(*param_1 + 0x438))(param_1);
		iVar4 = hookret(0x140004a40,(longlong)param_1);
		puVar6 = hookret(0x140004a50,(longlong)param_1,local_38);
		puVar7 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar7,local_28,puVar6,0x13,(longlong)iVar4,param_1,0,uVar8,
					  (longlong)param_1);
	  }
	}
	hook(0x1400bf520,(longlong)param_1);
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar4 - 0x17fU < 9) {
	  hook(0x14000cee0,(longlong)param_1);
	  fVar1 = *(float *)(param_1 + 0xd25);
	  *(float *)(param_1 + 0xd25) = extraout_XMM0_Da + fVar1;
	  if (50.0 < extraout_XMM0_Da + fVar1) {
		lVar5 = hookret(0x140001a90);
		iVar4 = hookret(0x140221120,lVar5);
		if ((iVar4 != 1) && (iVar4 != 0xc)) {
		  iVar4 = hookret(0x140004a40,(longlong)param_1);
		  puVar6 = hookret(0x140004a50,(longlong)param_1,local_28);
		  puVar7 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar7,local_38,puVar6,3,(longlong)iVar4,param_1,0,uVar8,
						(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd25) = 0;
	  }
	}
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((iVar4 == 0xe0) && ((*(uint *)(param_1 + 0x29f) & 0x2000000) != 0)) {
	  hookret(0x1400bce90,(longlong)param_1,'\0');
	}
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_1400bbba0(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar20;
  undefined4 uVar21;
  undefined8 uStack104;
  float fStack96;
  undefined4 auStack88 [8];

  plVar15 = param_1 + 0xd1f;
  lVar17 = 3;
  do {
	if ((*plVar15 != 0) && (bVar5 = hookret(0x140001b80,*plVar15), bVar5 == false)) {
	  *plVar15 = 0;
	}
	plVar15 = plVar15 + 1;
	lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if ((param_1[0xd22] != 0) && (bVar5 = hookret(0x140001b80,param_1[0xd22]), bVar5 == false)) {
	param_1[0xd22] = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x29f);
  iVar9 = *(int *)(param_1 + 0x2a2);
  hook(0x14004bd30,param_1);
  iVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar7 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400b9b30,(longlong)param_1);
  hook(0x1400b9ad0,(longlong)param_1);
  uVar2 = *(uint *)(param_1 + 0x29f);
  lVar17 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x12);
  if (lVar17 == 0) {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
  }
  else {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x80000000;
  }
  bVar5 = false;
  if (((*(uint *)((longlong)param_1 + 0x14f4) & 0x20) == 0) &&
	 ((*(byte *)(param_1 + 0x29f) & 4) == 0)) {
	bVar3 = false;
  }
  else {
	bVar3 = true;
  }
  uVar18 = *(uint *)((longlong)param_1 + 0x14f4) >> 0x15;
  iVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar8 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar8 != '\0') {
	hookret(0x1400bc8a0,(longlong)param_1);
  }
  bVar19 = (*(uint *)(param_1 + 0x2a1) & 0x100000) == 0;
  if (!bVar19) {
	hook(0x1400b9b80,param_1,0x13);
  }
  if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) == 0) {
	bVar5 = true;
	bVar4 = true;
	hook(0x1400b9b80,param_1,0x11);
	if (iVar9 < 0) {
	  iVar9 = hookret(0x140004a40,(longlong)param_1);
	  puVar11 = hookret(0x140004a50,(longlong)param_1,&uStack104);
	  puVar12 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar12,puVar11,0x10,(longlong)iVar9);
	  hook(0x1400239c0,&uStack104,0xffffffffffffffff);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd24),(longlong)&uStack104);
	}
	iVar9 = hookret(0x140684ea0,(longlong)(param_1 + 0x2a6));
	if (iVar9 != 0) {
	  hookret(0x140031810,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),(longlong)(param_1 + 0x2a6 ),0,
					'\0');
	}
	hook(0x1400bb910,(longlong)param_1,0xe);
	bVar3 = false;
LAB_1400bbe8e:
	hook(0x1400bb910,(longlong)param_1,0xf);
	if (bVar5) {
	  hook(0x1400bb910,(longlong)param_1,0x10);
	}
	if (!bVar3) goto LAB_1400bbec4;
  }
  else {
	uVar10 = hookret(0x140056290,(longlong)param_1);
	if ((char)uVar10 == '\0') {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
	}
	if (((bVar3) || ((uVar18 & 1) != 0)) || (iVar7 == 0x1b8)) {
	  bVar4 = true;
	}
	else {
	  bVar4 = false;
	}
	hook(0x1400b9b80,param_1,0xe);
	hook(0x1400b9b80,param_1,0xf);
	hook(0x1400b9b80,param_1,0x10);
	if (((!bVar3) && ((uVar18 & 1) == 0)) && (iVar7 != 0x1b8)) {
	  hook(0x1400b9b80,param_1,0x15);
	}
	bVar3 = true;
	iVar9 = hookret(0x140684ea0,(longlong)(param_1 + 0x2a6));
	if (iVar9 != 1) {
	  hookret(0x140031810,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),(longlong)(param_1 + 0x2a6),1,'\ 0');
	}
	if (((byte)(uVar1 >> 0x16) & 1) != ((byte)(uVar2 >> 0x16) & 1)) goto LAB_1400bbe8e;
  }
  hook(0x1400bb910,(longlong)param_1,0x11);
LAB_1400bbec4:
  if (bVar19) {
	hook(0x1400bb910,(longlong)param_1,0x13);
  }
  if (bVar4) {
	hook(0x1400bb910,(longlong)param_1,0x15);
  }
  hook(0x14000bf40,(undefined4 *)&uStack104,&DAT_140d76030);
  iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar9 == 0x28) || (iVar9 = (**(code **)(*param_1 + 0x180))(param_1), iVar9 == 0x29)) ||
	 (iVar9 = (**(code **)(*param_1 + 0x180))(param_1), iVar9 == 0x2a)) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  fVar20 = -15.0;
	}
	else {
	  fVar20 = 15.0;
	}
	iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
	lVar17 = hookret(0x140001a90);
	cVar6 = hookret(0x140038a10,lVar17 + 0x38);
	if (cVar6 != '\0') {
	  pfVar13 = (float *)hookret(0x140001030,0x3c8efa35,(float)uStack104 * 0.01745329,fVar20 * 0.017453 29,
									   fStack96 * 0.01745329,auStack88);
	  hook(0x140455840,(float *)&uStack104,pfVar13);
	  uVar14 = hookret(0x140004740);
	  if (iVar9 == 0x29) {
		uVar21 = 2;
	  }
	  else {
		uVar21 = 1;
	  }
	  plVar15 = hookret(0x140131410,uVar14,100,0x1e,param_1,uVar21,0xffffffff,(undefined4 *)&uStack104 ,
							  param_1,0xffffffff,&DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar15 != (longlong *)0x0) {
		(**(code **)(*plVar15 + 0xa8))(plVar15,param_1);
		hook(0x1400604e0,(longlong)plVar15,param_1);
		hook(0x140060360,(longlong)plVar15,0xc0);
		hook(0x140077ac0,(longlong)plVar15,0x40);
		plVar16 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar16,0xd,plVar15,0);
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400f0d70(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar2 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar2 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) && (*(char *)(param_1 + 0xd1f) != '\0 '))
  {
	lVar4 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),3);
	if (lVar4 == 0) {
	  if (param_1[0xd1e] != 0) {
		bVar2 = hookret(0x140001b80,param_1[0xd1e]);
		if (bVar2 == false) {
		  param_1[0xd1e] = 0;
		}
	  }
	  plVar1 = (longlong *)param_1[0xd1e];
	  if (plVar1 != (longlong *)0x0) {
		bVar2 = hookret(0x140001b80,(longlong)plVar1);
		if (bVar2 != false) {
		  (**(code **)(*plVar1 + 0xd8))(plVar1);
		  param_1[0xd1e] = 0;
		}
	  }
	  *(undefined *)(param_1 + 0xd1f) = 0;
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar5 = hookret(0x140004a50,(longlong)param_1,local_18);
	  puVar6 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar6,puVar5,0xb,(longlong)iVar3);
	  hook(0x1400239c0,local_18,0xffffffffffffffff);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)local_18);
	}
  }
  return;



POSTCHARACTER();
}
void UndefinedFunction_1400b8a00(longlong *param_1)

{
PRECHARACTER(param_1);;

  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined6 extraout_var;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uStack72;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined8 auStack56 [2];
  undefined8 auStack40 [4];

  hook(0x14004bd30,param_1);
  hook(0x14007a390,param_1 + 0xd1e);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400b91e0,param_1);
  hook(0x1400b5a90,param_1);
  hook(0x1400b9630,(longlong)param_1);
  lVar4 = hookret(0x14004cab0,(longlong)param_1,0);
  uVar2 = hookret(0x140032f40,lVar4);
  uVar12 = 0x3f800000;
  if ((((int)CONCAT62(extraout_var,uVar2) == 0x1a4) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 60.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 62.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack56);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack40,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  uVar2 = hookret(0x140032f40,lVar4);
  if ((((int)CONCAT62(extraout_var_00,uVar2) == 0x1a5) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 64.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 66.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  uVar2 = hookret(0x140032f40,lVar4);
  if ((((int)CONCAT62(extraout_var_01,uVar2) == 0x1a6) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 64.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 66.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  uVar2 = hookret(0x140032f40,lVar4);
  if ((((int)CONCAT62(extraout_var_02,uVar2) == 0x1a7) &&
	  (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), 64.0 <= fVar11)) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 < 66.0)) {
	puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
	puVar6 = hookret(0x140003aa0);
	hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,0x12,0,param_1,0,uVar12,(longlong)param_1);
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((iVar3 == 0xc0) || (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 == 0xca)) ||
	  ((iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 == 0xac &&
	   ((*(byte *)(param_1 + 0x29f) & 4) == 0)))) &&
	 (fVar11 = (float)(**(code **)(*param_1 + 0x160))(param_1), fVar11 <= 25.0)) {
	hookret(0x1400b9580,(longlong)param_1);
  }
  hook(0x14000bf40,&uStack72,&DAT_140d76030);
  uVar12 = 1;
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar3 == 0x28) {
	uStack68 = 0x42c80000;
  }
  else {
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar3 != 0x29) {
	  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar3 != 0x2a) {
		return;
	  }
	  uStack68 = 0x43070000;
	  goto LAB_1400b8d70;
	}
	uStack68 = 0x428c0000;
  }
  uVar12 = 3;
  uStack64 = 0xc1200000;
LAB_1400b8d70:
  lVar4 = hookret(0x140001a90);
  cVar1 = hookret(0x140038a10,lVar4 + 0x38);
  if (cVar1 != '\0') {
	uVar7 = hookret(0x140004740);
	plVar8 = hookret(0x140131530,uVar7,100,0x1b,param_1,uVar12,0xffffffff,&DAT_140d76030,param_1,
						   0xffffffff,&uStack72,4,4,3,(longlong *)0x0);
	if (plVar8 != (longlong *)0x0) {
	  (**(code **)(*plVar8 + 0xa8))(plVar8,param_1);
	  uVar7 = hookret(0x1400604e0,(longlong)plVar8,param_1);
	  puVar9 = hookret(0x140001030,uVar7,0x3f666666,0x3f666666,0x3f666666,(undefined4 *)auStack40);
	  hook(0x140016830,(longlong)plVar8,puVar9);
	  hook(0x140060360,(longlong)plVar8,0xc0);
	  hook(0x140077ac0,(longlong)plVar8,0x40);
	  plVar10 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar10,0xd,plVar8,0);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400b5010(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  hookret(0x14004d3e0,*(longlong *)param_1[0x7e8],1,2);
	  uVar1 = 1;
	}
	else {
	  hookret(0x14004d3e0,*(longlong *)param_1[0x7e8],1,1);
	  uVar1 = 2;
	}
	hookret(0x14004d3e0,*(longlong *)param_1[0x7e8],0,uVar1);
	return;
  }
  return;



POSTCHARACTER();
}
void FUN_1400ae4a0(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar18;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 local_78 [2];
  undefined8 local_68 [8];

  uVar6 = hookret(0x140056290,(longlong)param_1);
  uVar1 = *(uint *)((longlong)param_1 + 0x14f4);
  lVar7 = hookret(0x1400129d0,(longlong)param_1);
  lVar8 = hookret(0x140011720,lVar7);
  if (lVar8 != 0) {
	if (((*(uint *)(param_1 + 0x2a2) & 0x400000) == 0) &&
	   (uVar9 = hookret(0x140056290,(longlong)param_1), (char)uVar9 != '\0')) {
	  uVar17 = 0;
	  do {
		uVar4 = (**(code **)(*param_1 + 0x468))(param_1);
		uVar4 = hookret(0x14004b070,lVar8,uVar4);
		hook(0x14004d3e0,(longlong)param_1,(byte)uVar4,uVar17);
		uVar17 = uVar17 + 1;
	  } while ((int)uVar17 < 0x32);
	  iVar5 = hookret(0x1400ae380,(longlong)param_1);
	  if ((iVar5 == 0x46) || (uVar17 = hookret(0x14004b070,lVar8,0x46), (char)uVar17 != '\0')) {
		hook(0x14004d3e0,(longlong)param_1,1,0x46);
	  }
	}
	else {
	  hook(0x14004d420,(longlong)param_1,'\0');
	}
	if (*(char *)(param_1 + 0xdd2) != '\0') {
	  *(undefined *)(param_1 + 0xdd2) = 1;
	  uVar10 = hookret(0x140056380,lVar8,'\0');
	  if ((char)uVar10 != '\0') {
		*(undefined *)(param_1 + 0xdd2) = 0;
	  }
	  lVar11 = hookret(0x1400240f0,lVar8 + 0x1560,0xd);
	  if (lVar11 == 0) {
		*(undefined *)(param_1 + 0xdd2) = 0;
	  }
	  if ((*(byte *)(lVar8 + 0x1514) & 0x10) != 0) {
		*(undefined *)(param_1 + 0xdd2) = 1;
	  }
	  if ((*(uint *)(lVar8 + 0x1510) & 0x4000) != 0) {
		*(undefined *)(param_1 + 0xdd2) = 1;
	  }
	}
	if ((((*(uint *)(lVar8 + 0x14f4) & 0x200000) != 0) || ((*(byte *)(lVar8 + 0x1528) & 8) != 0))  ||
	   ((iVar5 = (**(code **)(*param_1 + 0x180))(param_1), 299 < iVar5 &&
		(iVar5 = (**(code **)(*param_1 + 0x180))(param_1), iVar5 < 0x154)))) {
	  lVar11 = hookret(0x14001a6f0,lVar8);
	  lVar11 = hookret(0x140011720,lVar11);
	  if (lVar11 != 0) {
		lVar11 = hookret(0x140041f50,lVar11,2);
		hook(0x140529730,(longlong)param_1,lVar11,2);
	  }
	  uVar17 = 0;
	  do {
		lVar11 = hookret(0x14004cab0,lVar8,uVar17);
		if (lVar11 != 0) {
		  lVar2 = *param_1;
		  hook(0x1407a3ec0,lVar11);
		  hook(0x1400046b0,lVar11);
		  hook(0x1407a3ec0,lVar11);
		  hook(0x14000cee0,(longlong)param_1);
		  hook(0x140032f40,lVar11);
		  (**(code **)(lVar2 + 0xd8))(param_1);
		}
		uVar17 = uVar17 + 1;
	  } while (uVar17 < 2);
	}
  }
  uVar9 = hookret(0x140056290,(longlong)param_1);
  if (((char)uVar9 != '\0') && (*(char *)(param_1 + 0xdd2) == '\0')) {
	(**(code **)(*param_1 + 0x280))(param_1);
	*(uint *)(param_1 + 0x2a1) = *(uint *)(param_1 + 0x2a1) & 0xfffbffff;
  }
  uVar9 = hookret(0x140056290,(longlong)param_1);
  if ((char)uVar9 != '\0') {
	plVar12 = param_1 + 0xd1e;
	hook(0x140033110,(longlong)plVar12);
	lVar11 = hookret(0x140011720,(longlong)plVar12);
	if ((lVar11 != 0) && (lVar11 = hookret(0x140011720,(longlong)plVar12), lVar11 != 0)) {
	  hookret(0x140032f50,lVar11);
	  hook(0x1400aee10,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),extraout_XMM0_Da,(longlong)param _1);
	  hook(0x1400309a0,lVar11);
	  hook(0x1400aee30,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),extraout_XMM0_Da_00,
					(longlong)param_1);
	  hook(0x140032f70,lVar11);
	  hook(0x1400aee40,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),extraout_XMM0_Da_01,
					(longlong)param_1);
	  hook(0x140032f60,lVar11);
	  hook(0x1400aee20,CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),extraout_XMM0_Da_02,
					(longlong)param_1);
	}
  }
  hook(0x14004bd30,param_1);
  if (((*(uint *)(param_1 + 0x2a2) & 0x400000) != 0) ||
	 (uVar9 = hookret(0x140056290,(longlong)param_1), (char)uVar9 == '\0')) {
	hook(0x14004d420,(longlong)param_1,'\0');
  }
  uVar9 = hookret(0x140056290,(longlong)param_1);
  plVar12 = (longlong *)hookret(0x140056010,(longlong)param_1,0xf);
  if (((((char)uVar6 != '\0') && ((uVar1 >> 0xd & 1) != 0)) || (plVar12 != (longlong *)0x0)) &&
	 ((((char)uVar6 == '\x01' && ((char)uVar9 == '\0')) ||
	  ((iVar5 = (**(code **)(*param_1 + 0x180))(param_1), iVar5 == 0x111 &&
	   (fVar18 = (float)(**(code **)(*param_1 + 0x160))(param_1), 260.0 < fVar18)))))) {
	plVar13 = (longlong *)hookret(0x140011720,lVar7);
	if (plVar13 == (longlong *)0x0) {
	  plVar13 = param_1;
	}
	uVar10 = hookret(0x140004740);
	plVar14 = hookret(0x140131310,uVar10,100,0x23,param_1,4,0xffffffff,&DAT_140d2acf0,&DAT_140d76030,4 ,3,
							(longlong *)0x0);
	if (plVar14 != (longlong *)0x0) {
	  (**(code **)(*plVar14 + 0xa8))(plVar14,param_1);
	  hook(0x1400604e0,(longlong)plVar14,plVar13);
	  hook(0x140060360,(longlong)plVar14,0x2100080);
	  plVar13 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar13,0xd,plVar14,0);
	  if ((lVar8 != 0) && (bVar3 = hookret(0x140001b80,lVar8), bVar3 != false)) {
		puVar15 = hookret(0x140004a50,lVar8,local_78);
		puVar16 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar16,local_68,puVar15,0x14,param_1,param_1,0,0x3f800000,
					  (longlong)param_1);
	  }
	}
	if (plVar12 != (longlong *)0x0) {
	  param_1[0xcf8] = 0;
	  (**(code **)(*plVar12 + 0xd8))(plVar12);
	}
	if ((lVar8 != 0) && (bVar3 = hookret(0x140001b80,lVar8), bVar3 != false)) {
	  puVar15 = hookret(0x140004a50,lVar8,local_68);
	  puVar16 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar16,puVar15,0x13,param_1);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400ac6e0(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;

  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
	param_1[0xd1e] = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x29f);
  hook(0x14004bd30,param_1);
  uVar1 = *(uint *)(param_1 + 0x29f);
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar4 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400ac490,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) {
	hookret(0x1400ac630,(longlong)param_1,0x10);
	hookret(0x1400ac630,(longlong)param_1,0x13);
  }
  else {
	if (((byte)(uVar1 >> 0x16) & 1) != ((byte)(uVar5 >> 0x16) & 1)) {
	  hookret(0x1400ac630,(longlong)param_1,0x10);
	  hookret(0x1400ac630,(longlong)param_1,0x13);
	}
	hook(0x1400ac4f0,param_1,0x10);
	hook(0x1400ac4f0,param_1,0x13);
  }
  uVar5 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar5 != '\0') {
	hookret(0x1400acb90,param_1);
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar4 == 0x28) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x29)) ||
	 (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x2a)) {
	lVar6 = hookret(0x140001a90);
	cVar3 = hookret(0x140038a10,lVar6 + 0x38);
	if (cVar3 != '\0') {
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0xfffffffc;
	  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x800;
	}
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar4 != 0x109) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0x10b)) {
	return;
  }
  if ((*(uint *)((longlong)param_1 + 0x14f4) >> 0x14 & 1) != 0) {
	*(uint *)((longlong)param_1 + 0x14f4) = *(uint *)((longlong)param_1 + 0x14f4) & 0xffefffff;
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_1400aaeb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  longlong alStack136 [2];
  undefined4 uStack120;
  undefined4 uStack116;
  undefined4 uStack112;
  undefined8 auStack104 [2];
  undefined8 auStack88 [3];

  plVar16 = param_1 + 0xd22;
  lVar19 = 2;
  do {
	if ((*plVar16 != 0) && (bVar7 = hookret(0x140001b80,*plVar16), bVar7 == false)) {
	  *plVar16 = 0;
	}
	plVar16 = plVar16 + 1;
	lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  if ((param_1[0xd24] != 0) && (bVar7 = hookret(0x140001b80,param_1[0xd24]), bVar7 == false)) {
	param_1[0xd24] = 0;
  }
  uVar18 = *(uint *)(param_1 + 0x2a2) >> 0x14;
  uVar12 = hookret(0x1400aad40,param_1);
  if (((char)uVar12 == '\0') || (bVar7 = true, (uVar18 & 1) != 0)) {
	bVar7 = false;
  }
  uVar12 = hookret(0x1400aac60,param_1);
  if (((char)uVar12 == '\0') || (bVar5 = true, (uVar18 & 1) != 0)) {
	bVar5 = false;
  }
  uVar13 = hookret(0x1400aace0,param_1);
  if (((char)uVar13 != '\0') || (bVar6 = false, (uVar18 & 1) != 0)) {
	bVar6 = true;
  }
  hook(0x14004bd30,param_1);
  iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar9 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  if (((*(uint *)(param_1 + 0x29e) & 0x2000) != 0) && ((*(uint *)(param_1 + 0x2a1) & 0x100000) !=  0)
	 ) {
	hookret(0x140024b30,(longlong)(param_1 + 0x2ac),6);
  }
  hook(0x1400725d0,(longlong)param_1);
  uVar10 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar10 != '\0') {
	hookret(0x1400ac0c0,(longlong)param_1);
  }
  hook(0x1400ab5b0,param_1);
  alStack136[0] = hookret(0x140056010,(longlong)param_1,0xf);
  lVar19 = hookret(0x140056010,(longlong)param_1,0x10);
  uVar10 = *(uint *)(param_1 + 0x2a2) >> 0x14;
  uVar12 = hookret(0x1400aad40,param_1);
  if (((char)uVar12 == '\0') || ((uVar10 & 1) != 0)) {
	bVar1 = false;
  }
  else {
	bVar1 = true;
  }
  uVar12 = hookret(0x1400aac60,param_1);
  if (((char)uVar12 == '\0') || ((uVar10 & 1) != 0)) {
	bVar2 = false;
  }
  else {
	bVar2 = true;
  }
  uVar13 = hookret(0x1400aace0,param_1);
  if (((char)uVar13 == '\0') && ((uVar10 & 1) == 0)) {
	bVar3 = false;
  }
  else {
	bVar3 = true;
  }
  bVar4 = false;
  bVar20 = ~(byte)(*(uint *)(param_1 + 0x2a2) >> 0xb) & 1;
  if ((((bVar1) && (alStack136[0] == 0)) && (lVar19 == 0)) || ((!bVar7 && (bVar1)))) {
	hookret(0x1400aaad0,(longlong)param_1,0xf);
	hookret(0x1400aaad0,(longlong)param_1,0x10);
	hook(0x1400a9460,param_1,0xf,0);
	if (bVar20 != 0) {
	  iVar9 = 0;
	  uVar18 = 0x10;
	  goto LAB_1400ab107;
	}
LAB_1400ab10f:
	bVar7 = true;
  }
  else {
	if ((((bVar2) && (alStack136[0] == 0)) && (lVar19 == 0)) || ((!bVar5 && (bVar2)))) {
	  hookret(0x1400aaad0,(longlong)param_1,0xf);
	  hookret(0x1400aaad0,(longlong)param_1,0x10);
	  uVar18 = 0xf;
	  iVar9 = 1;
LAB_1400ab107:
	  hook(0x1400a9460,param_1,uVar18,iVar9);
	  goto LAB_1400ab10f;
	}
	if (((((bVar3) && (alStack136[0] == 0)) && (lVar19 == 0)) || ((!bVar6 && (bVar3)))) ||
	   (((uVar18 & 1) == 0 && ((uVar10 & 1) != 0)))) {
	  hookret(0x1400aaad0,(longlong)param_1,0xf);
	  hookret(0x1400aaad0,(longlong)param_1,0x10);
	  uVar18 = 0xf;
	  iVar9 = 2;
	  goto LAB_1400ab107;
	}
	if ((((!bVar1) && (!bVar3)) && (!bVar2)) ||
	   (bVar7 = false, (*(uint *)(param_1 + 0x2a2) >> 10 & 1) != 0)) {
	  hookret(0x1400aaad0,(longlong)param_1,0xf);
	  hookret(0x1400aaad0,(longlong)param_1,0x10);
	  bVar7 = true;
	  goto LAB_1400ab115;
	}
  }
  bVar4 = bVar7;
  bVar7 = false;
LAB_1400ab115:
  if (bVar20 == 0) {
	hookret(0x1400aaad0,(longlong)param_1,0x10);
  }
  else if (((bVar1) && (!bVar2)) && (!bVar3)) {
	hook(0x1400a9460,param_1,0x10,0);
  }
  uVar11 = (**(code **)(*param_1 + 0x180))();
  switch(uVar11) {
  case 0x83:
  case 0x84:
  case 0x89:
  case 0x155:
  case 0x157:
  case 0x158:
  case 0x16d:
  case 0x16e:
  case 0x16f:
	break;
  default:
	lVar19 = hookret(0x140001a90);
	iVar9 = hookret(0x140221120,lVar19);
	if (((bVar4) && (uVar13 = hookret(0x140056380,(longlong)param_1,'\0'), (char)uVar13 == '\0')) &&
	   ((iVar9 != 1 && (iVar9 != 0xc)))) {
	  if (((*(byte *)(param_1 + 0x29e) & 1) == 0) || (iVar9 == 2)) {
		iVar9 = hookret(0x140004a40,(longlong)param_1);
		puVar14 = hookret(0x140004a50,(longlong)param_1,alStack136);
		puVar15 = hookret(0x140003aa0);
		hook(0x1402aad60,(longlong)puVar15,auStack104,puVar14,0,(longlong)iVar9,param_1,0,0x3f800000 ,
					  (longlong)param_1);
	  }
	}
	else if (bVar7) {
	  iVar9 = hookret(0x140004a40,(longlong)param_1);
	  puVar14 = hookret(0x140004a50,(longlong)param_1,auStack88);
	  puVar15 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar15,puVar14,0,(longlong)iVar9);
	}
  }
  lVar19 = hookret(0x1400aaba0,(longlong)param_1);
  if (lVar19 != 0) {
	lVar19 = hookret(0x1400aaba0,(longlong)param_1);
	hook(0x140037700,lVar19,(*(uint *)(param_1 + 0x2a2) & 0x40000000) != 0);
  }
  hook(0x14000bf40,&uStack120,&DAT_140d76030);
  iVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((0x27 < iVar9) && (iVar9 = (**(code **)(*param_1 + 0x180))(param_1), iVar9 < 0x2b)) {
	uStack116 = 0x42f00000;
	uStack112 = 0x42c80000;
	lVar19 = hookret(0x140001a90);
	cVar8 = hookret(0x140038a10,lVar19 + 0x38);
	if (cVar8 != '\0') {
	  uVar13 = hookret(0x140004740);
	  plVar16 = hookret(0x140131410,uVar13,100,0x19,param_1,0xffffffff,0xffffffff,&DAT_140d760b0,param _1,
							  0xffffffff,&uStack120,4,3,(longlong *)0x0);
	  if (plVar16 != (longlong *)0x0) {
		(**(code **)(*plVar16 + 0xa8))(plVar16,param_1);
		hook(0x1400604e0,(longlong)plVar16,param_1);
		hook(0x140060360,(longlong)plVar16,0xc0);
		hook(0x140077ac0,(longlong)plVar16,0x40);
		plVar17 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar17,0xd,plVar16,0);
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400a8830(longlong *param_1)

{
PRECHARACTER(param_1);;

  undefined4 extraout_XMM0_Da;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400a8d50,(longlong)param_1);
	hook(0x1400a8e10,param_1);
	hook(0x1400a8ce0,(longlong)param_1);
	hook(0x1400e0960,(longlong)param_1);
	hook(0x1400a8ec0,(longlong)param_1);
	hook(0x14054a250,(longlong)(param_1 + 0x2a6));
	*(undefined4 *)((longlong)param_1 + 0x68f4) = extraout_XMM0_Da;
  }
  return;


POSTCHARACTER();
}
void FUN_1400a66e0(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;

  hook(0x14004bd30,param_1);
  hook(0x1400a4700,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x2a2) & 0x800) != 0) {
	if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) && ((*(byte *)(param_1 + 0x29f) & 4) != 0) ) {
	  *(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf7ae148;
	  (**(code **)(*param_1 + 400))(param_1);
	  *(undefined4 *)((longlong)param_1 + 0x14f4) = 0x400020;
	}
	else {
	  (**(code **)(*param_1 + 400))(param_1);
	}
	*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) | 2;
  }
  iVar1 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar1 == 7) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) != 0) {
	  hookret(0x14004d3e0,(longlong)param_1,0,1);
	  hookret(0x14004d3e0,(longlong)param_1,1,2);
	  return;
	}
	hookret(0x14004d3e0,(longlong)param_1,0,2);
	hookret(0x14004d3e0,(longlong)param_1,1,1);
	return;
  }
  return;

POSTCHARACTER();
}
void UndefinedFunction_1400a1410(longlong *param_1)

{
PRECHARACTER(param_1);;

  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar12;
  undefined8 auStack56 [2];
  undefined8 auStack40 [4];

  lVar4 = hookret(0x1400a1250,(longlong)param_1);
  if (lVar4 != 0) {
	lVar4 = hookret(0x1400a1250,(longlong)param_1);
	bVar2 = hookret(0x140001b80,lVar4);
	if (bVar2 == false) {
	  hookret(0x1400a1b20,(longlong)param_1,0);
	}
  }
  hook(0x14004bd30,param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar3 != 0x1c2) && ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0)) {
	if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) != 0) {
	  pfVar5 = (float *)hookret(0x1400a1210,(longlong)param_1);
	  pfVar6 = (float *)hookret(0x140001b50,(longlong)param_1);
	  hook(0x14000bfd0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),pfVar6,(undefined4 *)auStack56,
					pfVar5);
	  hook(0x1400da960,(longlong)param_1);
	  uVar1 = hookret(0x14001bad0,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),extraout_XMM0_Da_00 ,
							(float *)auStack56);
	  puVar7 = hookret(0x140001210,uVar1,pfVar5,(undefined4 *)auStack40,(float *)auStack56);
	  *(undefined4 *)((longlong)param_1 + 0x54) = puVar7[1];
	  if (((*(uint *)(param_1 + 0x29f) & 0x2000) != 0) &&
		 (iVar3 = hookret(0x140086ec0,(longlong)param_1), -1 < iVar3)) {
		*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) | 2;
		lVar4 = *param_1;
		hookret(0x140086ec0,(longlong)param_1);
		(**(code **)(lVar4 + 400))(param_1);
		hook(0x1400a1980,(longlong)param_1,0xffffffff);
	  }
	}
	lVar4 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0xe);
	if (lVar4 == 0) {
	  plVar8 = (longlong *)hookret(0x140056010,(longlong)param_1,0xe);
	  if (plVar8 != (longlong *)0x0) {
		param_1[0xcf7] = 0;
		(**(code **)(*plVar8 + 0xd8))(plVar8);
		(**(code **)(*param_1 + 0x438))(param_1);
		uVar9 = hookret(0x140056290,(longlong)param_1);
		if ((char)uVar9 != '\0') {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar10 = hookret(0x140004a50,(longlong)param_1,auStack40);
		  puVar11 = hookret(0x140003aa0);
		  hook(0x1402aa5e0,(longlong)puVar11,puVar10,0x25,(longlong)iVar3);
		  hook(0x1400239c0,auStack56,0xffffffffffffffff);
		  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd24),(longlong)auStack56);
		  hook(0x14009ffc0,param_1,2);
		  hook(0x14009ffc0,param_1,3);
		}
	  }
	}
	else {
	  bVar2 = hookret(0x140061580,(longlong)(param_1 + 0xd24),-1);
	  if (bVar2 != false) {
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar10 = hookret(0x140004a50,(longlong)param_1,auStack40);
		puVar11 = hookret(0x140003aa0);
		puVar10 = hookret(0x1402aad60,(longlong)puVar11,auStack56,puVar10,0x25,(longlong)iVar3,param_1 ,0,
								0x3f800000,(longlong)param_1);
		thunk_hook(0x14000b010,(longlong)(param_1 + 0xd24),(longlong)puVar10);
	  }
	}
	lVar4 = hookret(0x14002f960,(longlong)param_1,3);
	if (lVar4 != 0) {
	  lVar4 = hookret(0x14004cab0,(longlong)param_1,0);
	  hook(0x1407a3ec0,lVar4);
	  uVar12 = extraout_XMM0_Da_01;
	  lVar4 = hookret(0x14002f960,(longlong)param_1,3);
	  lVar4 = hookret(0x14004cab0,lVar4,0);
	  hook(0x1400424b0,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),uVar12,lVar4);
	}
	if (((*(uint *)(param_1 + 0x2a2) & 0x100000) != 0) &&
	   (lVar4 = hookret(0x1400a1250,(longlong)param_1), lVar4 != 0)) {
	  puVar7 = (undefined4 *)hookret(0x140001b50,(longlong)param_1);
	  lVar4 = hookret(0x1400a1250,(longlong)param_1);
	  hook(0x140002af0,lVar4,puVar7);
	}
	hook(0x1400a2320,(longlong)param_1);
  }
  return;


POSTCHARACTER();
}
void FUN_14009ceb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong *plVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd20] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd20]), bVar2 == false)) {
	param_1[0xd20] = 0;
  }
  if (((param_1[0xd1e] != 0) && (*(char *)(param_1 + 0xd21) == '\0')) &&
	 (uVar4 = hookret(0x140056290,(longlong)param_1), (char)uVar4 != '\0')) {
	(**(code **)(*(longlong *)param_1[0xd1e] + 0xe0))();
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	if ((*(char *)(param_1 + 0xd1f) != '\0') &&
	   (lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0xf), lVar5 == 0)) {
	  if ((param_1[0xd1e] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd1e]), bVar2 == false)) {
		param_1[0xd1e] = 0;
	  }
	  plVar1 = (longlong *)param_1[0xd1e];
	  if ((plVar1 != (longlong *)0x0) && (bVar2 = hookret(0x140001b80,(longlong)plVar1), bVar2 != fals e))
	  {
		(**(code **)(*plVar1 + 0xd8))(plVar1);
		param_1[0xd1e] = 0;
	  }
	  *(undefined *)(param_1 + 0xd1f) = 0;
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar6 = hookret(0x140004a50,(longlong)param_1,local_28);
	  puVar7 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar7,puVar6,4,(longlong)iVar3);
	  hook(0x1400239c0,local_28,0xffffffffffffffff);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)local_28);
	}
	lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0xf);
	if ((lVar5 != 0) && (bVar2 = hookret(0x140061580,(longlong)(param_1 + 0xd22),-1), bVar2 != false))  {
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar6 = hookret(0x140004a50,(longlong)param_1,local_28);
	  puVar7 = hookret(0x140003aa0);
	  puVar6 = hookret(0x1402aad60,(longlong)puVar7,local_18,puVar6,4,(longlong)iVar3,param_1,0,0x3f80 0000
							 ,(longlong)param_1);
	  thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)puVar6);
	}
	hook(0x14009d720,(longlong)param_1);
	hook(0x14009d690,(longlong)param_1);
	uVar4 = hookret(0x140056290,(longlong)param_1);
	*(char *)(param_1 + 0xd21) = (char)uVar4;
  }
  return;


POSTCHARACTER();
}
void FUN_140099e30(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined6 extraout_var;
  longlong *plVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  float fVar15;
  float local_128 [4];
  float local_118 [4];
  float local_108 [4];
  float local_f8 [4];
  float local_e8 [4];
  undefined local_d8 [16];
  float local_c8 [12];
  undefined local_98 [64];
  undefined local_58 [80];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd20] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd20]), bVar1 == false)) {
	param_1[0xd20] = 0;
  }
  if ((param_1[0xd24] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd24]), bVar1 == false)) {
	param_1[0xd24] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x14009af20,(longlong)param_1);
  if (param_1[0xd20] == 0) {
	bVar1 = true;
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((iVar4 == 100) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x65)) {
	  bVar1 = false;
	}
	uVar5 = hookret(0x140056380,(longlong)param_1,'\0');
	if (((char)uVar5 == '\0') && (bVar1)) {
	  hookret(0x14009a830,param_1);
	}
  }
  else {
	bVar1 = false;
	iVar4 = (**(code **)(*param_1 + 0x180))();
	if ((iVar4 == 100) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0x65)) {
	  bVar1 = true;
	}
	uVar5 = hookret(0x140056380,(longlong)param_1,'\0');
	if (((char)uVar5 != '\0') || (bVar1)) {
	  if ((param_1[0xd20] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd20]), bVar1 == false)) {
		param_1[0xd20] = 0;
	  }
	  plVar7 = (longlong *)param_1[0xd20];
	  if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fals e))
	  {
		(**(code **)(*plVar7 + 0xd8))(plVar7);
		param_1[0xd20] = 0;
	  }
	}
  }
  if (param_1[0xd24] == 0) {
	lVar6 = hookret(0x14004cab0,(longlong)param_1,0);
	uVar3 = hookret(0x140032f40,lVar6);
	if ((int)CONCAT62(extraout_var,uVar3) == 0x8d) {
	  hookret(0x14009a940,param_1);
	}
  }
  if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
	if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != false) ) {
	  (**(code **)(*plVar7 + 0xd8))(plVar7);
	  param_1[0xd1e] = 0;
	}
	*(undefined2 *)(param_1 + 0xd1f) = 0;
	goto LAB_14009a40a;
  }
  fVar11 = *(float *)((longlong)param_1 + 0x54);
  fVar15 = 150.0;
  if (150.0 < fVar11) {
LAB_14009a0d2:
	if (fVar11 <= 70.0) {
LAB_14009a0db:
	  if (*(char *)((longlong)param_1 + 0x68f9) == '\0') {
		if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
		  param_1[0xd1e] = 0;
		}
		plVar7 = (longlong *)param_1[0xd1e];
		if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fa lse)
		   ) {
		  (**(code **)(*plVar7 + 0x78))(plVar7);
		  param_1[0xd1e] = 0;
		}
		uVar5 = hookret(0x140004740);
		plVar7 = hookret(0x140131660,uVar5,100,0xb,param_1,8,0xffffffff,3,(longlong *)0x0);
		param_1[0xd1e] = (longlong)plVar7;
		if (plVar7 != (longlong *)0x0) {
		  hookret(0x1400604e0,(longlong)plVar7,param_1);
		  hook(0x140060360,param_1[0xd1e],0x22c0);
		  plVar7 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1e],0);
		}
		*(undefined2 *)(param_1 + 0xd1f) = 0x100;
	  }
	}
  }
  else {
	if (fVar11 <= 70.0) goto LAB_14009a0db;
	if (*(char *)(param_1 + 0xd1f) != '\0') goto LAB_14009a0d2;
	if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != false) ) {
	  (**(code **)(*plVar7 + 0x78))(plVar7);
	  param_1[0xd1e] = 0;
	}
	uVar5 = hookret(0x140004740);
	plVar7 = hookret(0x140131660,uVar5,100,0xb,param_1,4,0xffffffff,3,(longlong *)0x0);
	param_1[0xd1e] = (longlong)plVar7;
	if (plVar7 != (longlong *)0x0) {
	  hookret(0x1400604e0,(longlong)plVar7,param_1);
	  hook(0x140060360,param_1[0xd1e],0x22c0);
	  plVar7 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1e],0);
	}
	*(undefined2 *)(param_1 + 0xd1f) = 1;
  }
  if (((fVar15 < *(float *)((longlong)param_1 + 0x54) ||
		fVar15 == *(float *)((longlong)param_1 + 0x54)) &&
	  ((*(char *)(param_1 + 0xd1f) != '\0' || (*(char *)((longlong)param_1 + 0x68f9) != '\0'))))  ||
	 ((*(uint *)((longlong)param_1 + 0x14f4) & 0x800) != 0)) {
	if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	  param_1[0xd1e] = 0;
	}
	plVar7 = (longlong *)param_1[0xd1e];
	if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != false) ) {
	  (**(code **)(*plVar7 + 0xd8))(plVar7);
	  param_1[0xd1e] = 0;
	}
	*(undefined2 *)(param_1 + 0xd1f) = 0;
  }
  hook(0x140098150,local_108,(float *)&DAT_140d2ab80,(float *)&DAT_140d76030);
  hook(0x1400109f0,(longlong)local_c8);
  hook(0x14000baa0,(longlong)local_98);
  if ((*(uint *)((longlong)param_1 + 0x14f4) & 0x40) == 0) {
	if ((char)*(uint *)((longlong)param_1 + 0x14f4) < '\0') {
	  fVar11 = 65.0;
	}
	else {
	  fVar11 = 90.0;
	}
	uVar14 = 0;
  }
  else {
	fVar11 = 129.0;
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  uVar14 = 0x40a00000;
	}
	else {
	  uVar14 = 0xc0a00000;
	}
  }
  pfVar8 = (float *)hookret(0x140001030,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),fVar11 * 0.0174532 9,
								  (float)(uVar14 ^ 0x80000000) * 0.01745329,0,local_f8);
  hook(0x140034c60,(longlong)local_98,pfVar8);
  lVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  hook(0x14000df60,(longlong)local_98,(longlong)local_58,lVar6);
  lVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  hook(0x1402f44c0,local_f8,(undefined4 *)(lVar6 + 0x30));
  uVar12 = 0;
  uVar13 = 0;
  hookret(0x140001030,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),0,0,0x4b189680,local_118);
  puVar9 = (undefined4 *)hookret(0x14000d5d0,local_118,local_d8,(longlong)local_58);
  hook(0x14000bf40,local_118,puVar9);
  hook(0x14004dbc0,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar13,uVar12),0x3f80 0000
				,local_128,local_f8);
  hook(0x14000bfd0,CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),local_118,local_e8,local_f8);
  uVar10 = hookret(0x1404b6eb0,local_128,local_108,local_e8,(float *)0x0,local_c8,(float *)0x0);
  if ((((char)uVar10 != '\0') && (lVar6 = param_1[0xd1e], lVar6 != 0)) &&
	 (bVar1 = hookret(0x140001b80,lVar6), bVar1 != false)) {
	hookret(0x140002af0,lVar6,local_c8);
  }
LAB_14009a40a:
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((iVar4 != 0x28) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0x29)) &&
	 (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0x2a)) {
	return;
  }
  lVar6 = hookret(0x140001a90);
  cVar2 = hookret(0x140038a10,lVar6 + 0x38);
  if (cVar2 != '\0') {
	hook(0x14000bf40,local_108,&DAT_140d76030);
	hook(0x14000bf40,local_128,&DAT_140d76030);
	lVar6 = hookret(0x140004740);
	hook(0x140130fa0,lVar6,0x3ec,param_1,param_1,local_108,local_128,0);
  }
  return;


POSTCHARACTER();
}
void FUN_1400edf80(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined4 extraout_XMM0_Da;

  hook(0x14004bd30,param_1);
  if (param_1[0xd20] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar1 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400eebf0,param_1);
	hook(0x1400eea90,(longlong)param_1);
	hook(0x1400eeb70,(longlong)param_1);
	hook(0x14054a250,(longlong)(param_1 + 0x2a6));
	*(undefined4 *)((longlong)param_1 + 0x690c) = extraout_XMM0_Da;
  }
  return;



POSTCHARACTER();
}
void FUN_140097740(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar8;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd1f] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1f]), bVar1 == false)) {
	param_1[0xd1f] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140093490,(longlong)param_1);
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar4 < 0xbe) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc0 < iVar4)) &&
	   ((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xc4 ||
		(iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 200 < iVar4)))) {
	  *(undefined4 *)(param_1 + 0xd20) = 0;
	}
	if ((*(uint *)(param_1 + 0x29f) & 0x2000000) != 0) {
	  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (((iVar4 < 0xbe) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc0 < iVar4)) &&
		 ((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xc4 ||
		  (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc6 < iVar4)))) {
		*(undefined4 *)((longlong)param_1 + 0x6904) = 0;
	  }
	  else {
		*(int *)((longlong)param_1 + 0x6904) = *(int *)((longlong)param_1 + 0x6904) + 1;
	  }
	}
	if ((*(int *)(param_1 + 0xd20) != 0) &&
	   ((((*(uint *)((longlong)param_1 + 0x14f4) >> 0x11 & 1) != 0 ||
		 ((*(byte *)(param_1 + 0x29f) & 0x80) != 0)) ||
		((*(uint *)((longlong)param_1 + 0x14f4) >> 0xc & 1) == 0)))) {
	  param_1[0xd20] = 0;
	  *(undefined4 *)(param_1 + 0xd21) = 0;
	}
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((((((iVar4 < 0xbe) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xc0 < iVar4)) & &
		  ((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xc4 ||
		   (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 200 < iVar4)))) &&
		 (cVar2 = (**(code **)(*param_1 + 0x350))(param_1), cVar2 == '\0')) &&
		((iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xac ||
		 (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), 0xae < iVar4)))) &&
	   (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 != 0xb0)) {
	  if (param_1[0xd1f] != 0) {
		bVar1 = hookret(0x140001b80,param_1[0xd1f]);
		if (bVar1 == false) {
		  param_1[0xd1f] = 0;
		}
		plVar7 = (longlong *)param_1[0xd1f];
		if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fa lse)
		   ) {
		  (**(code **)(*plVar7 + 0xd8))(plVar7);
		  param_1[0xd1f] = 0;
		}
	  }
	  if (0.0 < *(float *)(param_1 + 0xd21)) {
		if ((param_1[0xd1f] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1f]), bVar1 == false)) {
		  param_1[0xd1f] = 0;
		}
		plVar7 = (longlong *)param_1[0xd1f];
		if ((plVar7 != (longlong *)0x0) && (bVar1 = hookret(0x140001b80,(longlong)plVar7), bVar1 != fa lse)
		   ) {
		  (**(code **)(*plVar7 + 0x78))(plVar7);
		  param_1[0xd1f] = 0;
		}
		if ((param_1[0xd1f] == 0) &&
		   (lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x21), lVar5 == 0)) {
		  uVar6 = hookret(0x140004740);
		  plVar7 = hookret(0x140131660,uVar6,100,0x11,param_1,0xffffffff,0xffffffff,3,(longlong *)0x0) ;
		  param_1[0xd1f] = (longlong)plVar7;
		  if (plVar7 != (longlong *)0x0) {
			(**(code **)(*plVar7 + 0xa8))(plVar7,param_1);
			hook(0x1400604e0,param_1[0xd1f],param_1);
			hook(0x140060360,param_1[0xd1f],0x200028c0);
			plVar7 = (longlong *)hookret(0x140003160);
			hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1f],0);
		  }
		}
		*(undefined4 *)(param_1 + 0xd21) = 0;
	  }
	}
	else {
	  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	  if ((0xab < iVar4) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0xaf)) {
		lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
		uVar3 = hookret(0x140032f40,lVar5);
		if (((int)CONCAT62(extraout_var,uVar3) != 0x133) &&
		   ((uVar3 = hookret(0x140032f40,lVar5), (int)CONCAT62(extraout_var_00,uVar3) != 0x147 &&
			(uVar3 = hookret(0x140032f40,lVar5), (int)CONCAT62(extraout_var_01,uVar3) != 0x151)))) {
		  return;
		}
	  }
	  fVar8 = *(float *)(param_1 + 0x266) * *(float *)((longlong)param_1 + 0x1304);
	  lVar5 = hookret(0x140001a90);
	  hook(0x140012930,lVar5 + 0x38,0);
	  fVar8 = fVar8 * extraout_XMM0_Da;
	  hook(0x14000cee0,(longlong)param_1);
	  *(float *)(param_1 + 0xd21) = extraout_XMM0_Da_00 * fVar8 + *(float *)(param_1 + 0xd21);
	  if ((param_1[0xd1f] == 0) &&
		 (lVar5 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x21), lVar5 == 0)) {
		uVar6 = hookret(0x140004740);
		plVar7 = hookret(0x140131660,uVar6,100,0xb,param_1,0xffffffff,0xffffffff,3,(longlong *)0x0);
		param_1[0xd1f] = (longlong)plVar7;
		if (plVar7 != (longlong *)0x0) {
		  (**(code **)(*plVar7 + 0xa8))(plVar7,param_1);
		  hook(0x1400604e0,param_1[0xd1f],param_1);
		  hook(0x140060360,param_1[0xd1f],0x200028c0);
		  hook(0x140077ac0,param_1[0xd1f],0x10);
		  plVar7 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar7,0xd,(longlong *)param_1[0xd1f],0);
		}
	  }
	}
	hook(0x140097f60,param_1);
  }
  return;


POSTCHARACTER();
}
void FUN_140095b40(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;
  float fVar2;

  hook(0x14004bd30,param_1);
  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (0x10a < iVar1) {
	iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar1 < 0x10e) {
	  fVar2 = (float)(**(code **)(*param_1 + 0x160))(param_1);
	  if ((20.0 <= fVar2) && (-1 < (int)*(uint *)(param_1 + 0x2a2))) {
		*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x80000000;
	  }
	}
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_140092b60(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float extraout_XMM0_Da;
  float fVar7;
  undefined8 auStack40 [2];
  undefined8 auStack24 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1f] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1f]), bVar1 == false)) {
	param_1[0xd1f] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140093510,param_1);
	hook(0x140093490,(longlong)param_1);
	hook(0x140093860,param_1);
	hook(0x1400937d0,(longlong)param_1);
	hook(0x140093820,(longlong)param_1);
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar2 - 0xf4U < 2) {
	  hook(0x14000cee0,(longlong)param_1);
	  *(float *)(param_1 + 0xd25) = extraout_XMM0_Da + *(float *)(param_1 + 0xd25);
	  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar2 == 0xf4) {
		fVar7 = 31.0;
	  }
	  else {
		fVar7 = 16.0;
	  }
	  if (fVar7 < *(float *)(param_1 + 0xd25)) {
		lVar4 = hookret(0x140001a90);
		iVar2 = hookret(0x140221120,lVar4);
		if ((iVar2 != 1) && (iVar2 != 0xc)) {
		  iVar2 = hookret(0x140004a40,(longlong)param_1);
		  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
		  puVar5 = hookret(0x140004a50,(longlong)param_1,auStack40);
		  puVar6 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar6,auStack24,puVar5,(iVar3 != 0xf4) + 2,(longlong)iVar2,
						param_1,0,0x3f800000,(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd25) = 0;
	  }
	}
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if ((iVar2 != 0x106) && (iVar2 = (**(code **)(*param_1 + 0x180))(param_1), iVar2 != 0x107)) {
	  return;
	}
	fVar7 = (float)(**(code **)(*param_1 + 0x160))(param_1);
	if ((fVar7 < 40.0) && (iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1), iVar2 != -2)) {
	  (**(code **)(*param_1 + 0x1a8))(param_1,0xfffffffe);
	  return;
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140090810(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float extraout_XMM0_Da_00;
  float fVar7;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	fVar7 = 0.0;
	if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
	  if (*(float *)(param_1 + 0xd23) != 0.0) {
		*(undefined4 *)(param_1 + 0xd23) = 0;
	  }
	}
	else {
	  lVar5 = hookret(0x1400561f0,(longlong)param_1);
	  uVar3 = hookret(0x1406d1c80,lVar5);
	  if ((uVar3 >> 0x14 & 1) == 0) {
		hookret(0x14000cee0,(longlong)param_1);
		fVar6 = extraout_XMM0_Da_00;
	  }
	  else {
		hookret(0x14000cee0,(longlong)param_1);
		fVar6 = extraout_XMM0_Da * 2.0;
	  }
	  *(float *)(param_1 + 0xd23) = fVar6 + *(float *)(param_1 + 0xd23);
	}
	hook(0x140091050,(longlong)param_1);
	hook(0x1400910b0,(longlong)param_1);
	if (*(longlong *)(param_1[0x7e8] + 0x10) != 0) {
	  hookret(0x14004d3e0,*(longlong *)(param_1[0x7e8] + 0x10),1,1);
	  hookret(0x14004d3e0,*(longlong *)(param_1[0x7e8] + 0x10),1,2);
	}
	bVar1 = false;
	bVar2 = false;
	iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar4 == 0xd0) || (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0xd1)) ||
	   (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 == 0xd2)) {
	  bVar1 = true;
	}
	iVar4 = (**(code **)(*param_1 + 0x188))(param_1);
	if (((((iVar4 == 0xc1) || (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc3))  ||
		 ((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc4 ||
		  ((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc5 ||
		   (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc6)))))) ||
		(iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xca)) ||
	   ((((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xcb ||
		  (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xcc)) ||
		 (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xd0)) ||
		((iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xd1 ||
		 (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xd2)))))) {
	  bVar2 = true;
	}
	if ((bVar1) && (bVar2)) {
	  fVar6 = (float)(**(code **)(*param_1 + 0x170))(param_1);
	  if (fVar6 < 40.0) {
		fVar6 = (float)(**(code **)(*param_1 + 0x170))(param_1);
		if (fVar7 <= fVar6) {
		  param_1[0x81c] = 0;
		  param_1[0x81d] = 0;
		}
	  }
	  else {
		*(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf333333;
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_14008e370(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  float fVar9;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	if ((*(byte *)(param_1 + 0x2a2) & 8) != 0) {
	  uVar2 = hookret(0x14098daf0,(longlong)(param_1 + 0x439));
	  if ((uVar2 & 0x70) != 0) {
		*(int *)((longlong)param_1 + 0x68f4) = *(int *)((longlong)param_1 + 0x68f4) + 1;
	  }
	  lVar5 = hookret(0x140021fa0,(longlong)param_1);
	  lVar6 = hookret(0x140011720,lVar5);
	  if (lVar6 != 0) {
		plVar7 = (longlong *)hookret(0x140011720,lVar5);
		lVar5 = hookret(0x140001ab0);
		lVar5 = hookret(0x1400049f0,lVar5);
		uVar8 = hookret(0x140242630,lVar5,param_1,plVar7);
		if ((char)uVar8 != '\0') {
		  *(undefined4 *)((longlong)param_1 + 0x68f4) = 0x1e;
		}
	  }
	}
	bVar1 = false;
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	iVar4 = (**(code **)(*param_1 + 0x188))(param_1);
	if (((iVar4 == 199) || (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 200)) ||
	   (iVar4 = (**(code **)(*param_1 + 0x188))(param_1), iVar4 == 0xc9)) {
	  bVar1 = true;
	}
	if (((iVar3 == 0xca) && (bVar1)) &&
	   (fVar9 = (float)(**(code **)(*param_1 + 0x170))(param_1), 0.0 <= fVar9)) {
	  *(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf333333;
	  param_1[0x81c] = 0;
	  *(undefined4 *)(param_1 + 0x81d) = 0;
	}
  }
  return;


POSTCHARACTER();
}
void FUN_14008c3c0(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;
  uint uVar2;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x14008c710,(longlong)param_1);
  iVar1 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar1 == 7) {
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  hookret(0x14004d3e0,(longlong)param_1,0,0xc);
	  uVar2 = 0xb;
	}
	else {
	  hookret(0x14004d3e0,(longlong)param_1,0,0xb);
	  uVar2 = 0xc;
	}
	hookret(0x14004d3e0,(longlong)param_1,1,uVar2);
	if ((*(byte *)(param_1 + 0x2a2) & 8) != 0) {
	  hookret(0x14004d3e0,(longlong)param_1,1,10);
	  return;
	}
	hookret(0x14004d3e0,(longlong)param_1,0,10);
	return;
  }
  return;


POSTCHARACTER();
}
void FUN_140089400(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_28 [4];
  undefined4 local_18 [4];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  plVar4 = param_1 + 0xd1f;
  lVar5 = 3;
  do {
	if ((*plVar4 != 0) && (bVar1 = hookret(0x140001b80,*plVar4), bVar1 == false)) {
	  *plVar4 = 0;
	}
	plVar4 = plVar4 + 1;
	lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((param_1[0xd22] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd22]), bVar1 == false)) {
	param_1[0xd22] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140089dc0,(longlong)param_1);
	hook(0x140089e90,param_1);
	hook(0x140089d60,(longlong)param_1);
	hook(0x140089e00,(longlong)param_1);
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (((iVar3 != 0x28) && (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x29)) &&
	   (iVar3 = (**(code **)(*param_1 + 0x180))(param_1), iVar3 != 0x2a)) {
	  return;
	}
	lVar5 = hookret(0x140001a90);
	cVar2 = hookret(0x140038a10,lVar5 + 0x38);
	if (cVar2 != '\0') {
	  hookret(0x14000bf40,local_18,&DAT_140d76030);
	  hookret(0x14000bf40,local_28,&DAT_140d76030);
	  lVar5 = hookret(0x140004740);
	  hook(0x140130fa0,lVar5,0x3eb,param_1,param_1,local_18,local_28,0);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140081310(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  lVar4 = hookret(0x1400129d0,(longlong)param_1);
  uVar2 = hookret(0x140048270,lVar4);
  if ((uVar2 & 0x10) != 0) {
	*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfffffffe;
	return;
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar3 == 0xdc) && ((*(byte *)(param_1 + 0x29e) & 1) == 0)) {
	lVar5 = hookret(0x140011720,lVar4);
	if (lVar5 != 0) {
	  bVar1 = hookret(0x140001b80,lVar5);
	  if (bVar1 != false) {
		if (*(char *)((longlong)param_1 + 0x68f4) == '\0') {
		  if (50.0 < *(float *)((longlong)param_1 + 0x132c)) {
			iVar3 = hookret(0x1400812f0,lVar5);
			iVar8 = 9;
			if (iVar3 != 0) {
			  iVar8 = 0x12;
			}
			puVar6 = hookret(0x140004a50,lVar5,local_28);
			puVar7 = hookret(0x140003aa0);
			hook(0x1402aad60,(longlong)puVar7,local_18,puVar6,iVar8,0,param_1,0,0x3f800000,
						  (longlong)param_1);
			*(undefined *)((longlong)param_1 + 0x68f4) = 1;
		  }
		}
		else {
		  uVar2 = hookret(0x1403d8590,lVar4);
		  if ((uVar2 >> 0xd & 1) == 0) {
			iVar3 = hookret(0x1400812f0,lVar5);
			uVar9 = 9;
			if (iVar3 != 0) {
			  uVar9 = 0x12;
			}
			puVar6 = hookret(0x140004a50,lVar5,local_18);
			puVar7 = hookret(0x140003aa0);
			hook(0x1402aa5e0,(longlong)puVar7,puVar6,uVar9,0);
		  }
		}
	  }
	}
	return;
  }
  *(undefined *)((longlong)param_1 + 0x68f4) = 0;
  return;


POSTCHARACTER();
}
void FUN_14007d990(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;

  lVar2 = hookret(0x1400129d0,(longlong)param_1);
  uVar1 = hookret(0x140048270,lVar2);
  if ((uVar1 & 0x10) != 0) {
	*(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfffffffe;
  }
  uVar1 = hookret(0x140048270,lVar2);
  if ((uVar1 & 0x10) == 0) {
	uVar3 = hookret(0x140056290,(longlong)param_1);
	if (((char)uVar3 != '\0') && (*(char *)(param_1 + 0xd2a) == '\0')) {
	  (**(code **)(*param_1 + 0x280))(param_1);
	}
	uVar3 = hookret(0x140056290,(longlong)param_1);
	if ((char)uVar3 == '\0') {
	  hookret(0x14004d420,(longlong)param_1,'\0');
	  hook(0x14004bd30,param_1);
	  return;
	}
	uVar1 = hookret(0x14004b070,(longlong)param_1,0);
	if ((char)uVar1 == '\0') {
	  hookret(0x14004d420,(longlong)param_1,'\x01');
	  hook(0x14004d3e0,(longlong)param_1,0,0x7e);
	  hook(0x14004d3e0,(longlong)param_1,0,0x7f);
	  lVar2 = hookret(0x140031550,(longlong)(param_1 + 0x2a6));
	  if (lVar2 != 0) {
		hookret(0x14004d0f0,param_1,*(uint *)(lVar2 + 0x24c));
	  }
	}
  }
  hook(0x14004bd30,param_1);
  return;


POSTCHARACTER();
}
void UndefinedFunction_14007ad00(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong lVar10;
  longlong *plVar11;
  float extraout_XMM0_Da;
  float fVar12;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  float fStack72;
  float fStack64;
  undefined8 auStack56 [4];

  hook(0x14004bd30,param_1);
  hook(0x14007a390,param_1 + 0xd1e);
  pplVar9 = (longlong **)(param_1 + 0xd21);
  hook(0x14007a390,(longlong *)pplVar9);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x14007a600,(longlong)param_1);
	hook(0x14007a660,(longlong)param_1);
	hook(0x14007b9e0,param_1);
	hook(0x1400e0960,(longlong)param_1);
	plVar11 = param_1 + 0xd26;
	lVar10 = 3;
	do {
	  plVar4 = *pplVar9;
	  if (plVar4 == (longlong *)0x0) {
		*(undefined4 *)plVar11 = 0;
		plVar4 = *pplVar9;
		if (plVar4 != (longlong *)0x0) goto LAB_14007ada3;
	  }
	  else {
LAB_14007ada3:
		bVar1 = hookret(0x140001b80,(longlong)plVar4);
		if ((bVar1 == false) &&
		   (plVar4 = hookret(0x140013a90,plVar4,(longlong)&DAT_140d49d70), plVar4 != (longlong *)0x0))  {
		  hookret(0x140075960,(longlong)plVar4);
		  *(undefined4 *)plVar11 = 0;
		  plVar4 = *pplVar9;
		  if (plVar4 != (longlong *)0x0) {
			bVar1 = hookret(0x140001b80,(longlong)plVar4);
			if (bVar1 != false) {
			  bVar1 = hookret(0x140001b80,(longlong)plVar4);
			  if (bVar1 == false) goto LAB_14007adfa;
			  (**(code **)(*plVar4 + 0x78))(plVar4);
			}
			*pplVar9 = (longlong *)0x0;
		  }
		}
	  }
LAB_14007adfa:
	  plVar11 = (longlong *)((longlong)plVar11 + 4);
	  pplVar9 = pplVar9 + 1;
	  lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	hook(0x14007bd70,(longlong)param_1);
	if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) || ((*(byte *)(param_1 + 0x2a2) & 8) != 0) ) {
	  hookret(0x140079c40,(longlong)param_1,0xe);
	}
	else {
	  hook(0x14007a6e0,param_1,0xe);
	}
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar3 - 0x17fU < 9) {
	  hook(0x14000cee0,(longlong)param_1);
	  fVar12 = *(float *)(param_1 + 0xd29);
	  *(float *)(param_1 + 0xd29) = extraout_XMM0_Da + fVar12;
	  if (40.0 < extraout_XMM0_Da + fVar12) {
		lVar10 = hookret(0x140001a90);
		iVar3 = hookret(0x140221120,lVar10);
		if ((iVar3 != 1) && (iVar3 != 0xc)) {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar5 = hookret(0x140004a50,(longlong)param_1,(undefined8 *)&fStack72);
		  puVar6 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar6,auStack56,puVar5,5,(longlong)iVar3,param_1,0,0x3f800000 ,
						(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd29) = 0;
	  }
	}
	hook(0x14000bf40,&uStack88,&DAT_140d76030);
	hook(0x14000bf40,&fStack72,&DAT_140d76030);
	iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar3 == 0x28) {
	  uStack84 = 0x43340000;
	  uStack80 = 0x40400000;
	}
	else {
	  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar3 == 0x29) {
		uStack84 = 0x42960000;
		uStack80 = 0xc0a00000;
	  }
	  else {
		iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
		if (iVar3 != 0x2a) {
		  return;
		}
		uStack84 = 0x43320000;
		uStack80 = 0x40800000;
	  }
	}
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  fVar12 = -30.0;
	}
	else {
	  fVar12 = 30.0;
	}
	lVar10 = hookret(0x140001a90);
	cVar2 = hookret(0x140038a10,lVar10 + 0x38);
	if (cVar2 != '\0') {
	  pfVar7 = (float *)hookret(0x140001030,0x3c8efa35,fStack72 * 0.01745329,fVar12 * 0.01745329,
									  fStack64 * 0.01745329,(undefined4 *)auStack56);
	  hook(0x140455840,&fStack72,pfVar7);
	  uVar8 = hookret(0x140004740);
	  plVar11 = hookret(0x140131410,uVar8,100,0x14,param_1,0xffffffff,0xffffffff,&fStack72,param_1,
							  0xffffffff,&uStack88,4,3,(longlong *)0x0);
	  if (plVar11 != (longlong *)0x0) {
		(**(code **)(*plVar11 + 0xa8))(plVar11,param_1);
		hook(0x1400604e0,(longlong)plVar11,param_1);
		hook(0x140060360,(longlong)plVar11,0xc0);
		hook(0x140077ac0,(longlong)plVar11,0x40);
		plVar4 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar4,0xd,plVar11,0);
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_1400ebbb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  int iVar1;
  longlong lVar2;

  lVar2 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  hook(0x14000bf40,(undefined4 *)(param_1 + 0xd20),(undefined4 *)(lVar2 + 0x30));
  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400ebfa0,(longlong)param_1);
	iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
	if (0xc4 < iVar1) {
	  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
	  if ((iVar1 < 200) && ((*(byte *)(param_1 + 0x29f) & 8) != 0)) {
		param_1[0x81c] = 0;
		param_1[0x81d] = 0;
		param_1[0x81e] = 0;
		param_1[0x81f] = 0;
	  }
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140079eb0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined6 extraout_var;

  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  *(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
  hook(0x14004bd30,param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar3 == 0x1c2) || ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0)) {
	return;
  }
  hook(0x14007a320,(longlong)param_1);
  hook(0x140078220,(longlong)param_1);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar4 = hookret(0x140024160,(longlong)(param_1 + 0x2ac));
  if (((uVar4 & 0x10) == 0) ||
	 (((((iVar3 != 0x187 && iVar3 != 0x186) && iVar3 != 0x17f) && iVar3 != 0x17d) && iVar3 != 0x 17c)
	  && iVar3 != 0xf)) {
LAB_140079fc8:
	hookret(0x140079c40,(longlong)param_1,0xe);
  }
  else {
	lVar5 = hookret(0x140001b50,(longlong)param_1);
	if (*(float *)(lVar5 + 4) <= 70.0) {
	  hookret(0x140078280,param_1,0xf);
	  uVar4 = 0xe;
	  goto LAB_140079fd2;
	}
	if (150.0 < *(float *)(lVar5 + 4)) goto LAB_140079fc8;
	hookret(0x140078280,param_1,0xe);
  }
  uVar4 = 0xf;
LAB_140079fd2:
  hookret(0x140079c40,(longlong)param_1,uVar4);
  lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
  uVar2 = hookret(0x140032f40,lVar5);
  if ((int)CONCAT62(extraout_var,uVar2) != 0x8d) {
	hookret(0x140079c40,(longlong)param_1,0x10);
	return;
  }
  hookret(0x140078280,param_1,0x10);
  return;


POSTCHARACTER();
}
void FUN_140077670(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_48 [4];

  if ((param_1[0xd20] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd20]), bVar2 == false)) {
	param_1[0xd20] = 0;
  }
  plVar10 = param_1 + 0xd21;
  lVar13 = 3;
  do {
	if ((*plVar10 != 0) && (bVar2 = hookret(0x140001b80,*plVar10), bVar2 == false)) {
	  *plVar10 = 0;
	}
	plVar10 = plVar10 + 1;
	lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  iVar4 = hookret(0x140077610,(longlong)param_1,0);
  uVar14 = 1;
  iVar5 = hookret(0x140077610,(longlong)param_1,1);
  hook(0x14004bd30,param_1);
  hook(0x140075650,(longlong)param_1);
  iVar6 = hookret(0x140077610,(longlong)param_1,0);
  iVar7 = hookret(0x140077610,(longlong)param_1,1);
  bVar2 = (*(uint *)((longlong)param_1 + 0x14f4) & 0x102000) == 0x102000;
  iVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((((iVar8 == 10) || (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 == 0x1f)) ||
	   (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 == 0x22)) ||
	  ((iVar8 = (**(code **)(*param_1 + 0x180))(param_1), 0x44 < iVar8 &&
	   (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 < 0x4b)))) ||
	 ((iVar8 = (**(code **)(*param_1 + 0x180))(param_1), 0x95 < iVar8 &&
	  (iVar8 = (**(code **)(*param_1 + 0x180))(param_1), iVar8 < 0xa9)))) {
	bVar1 = true;
  }
  else {
	bVar1 = false;
  }
  if (iVar7 + iVar6 != iVar5 + iVar4) {
	hookret(0x140077520,(longlong)param_1,0xe);
  }
  hook(0x1400756e0,param_1,0xe);
  if (((*(byte *)((longlong)param_1 + 0x14f4) & 2) == 0) || (!bVar1)) {
	hookret(0x140077520,(longlong)param_1,0x14);
	hook(0x140077ad0,(longlong)param_1,0);
  }
  if ((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) {
	hookret(0x140077520,(longlong)param_1,0x15);
  }
  else {
	hook(0x1400756e0,param_1,0x15);
  }
  if ((((bVar2) || (iVar6 == 0)) || (iVar6 != iVar4)) &&
	 (hookret(0x140077520,(longlong)param_1,0xf), bVar2)) {
LAB_14007786d:
	hookret(0x140077520,(longlong)param_1,0x10);
	if (bVar2) goto LAB_140077891;
  }
  else {
	if (iVar6 != 0) {
	  hook(0x1400756e0,param_1,0xf);
	}
	if ((iVar7 == 0) || (iVar7 != iVar5)) goto LAB_14007786d;
  }
  if (iVar7 != 0) {
	hook(0x1400756e0,param_1,0x10);
  }
LAB_140077891:
  hook(0x1400756e0,param_1,0x16);
  hook(0x14000bf40,local_48,&DAT_140d76030);
  uVar15 = 0;
  uVar12 = 0;
  uVar16 = 2;
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar4 == 0x2a) {
	uVar16 = 1;
  }
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((0x27 < iVar4) && (iVar4 = (**(code **)(*param_1 + 0x180))(param_1), iVar4 < 0x2b)) &&
	 (uVar16 != 0)) {
	do {
	  if (uVar15 != 0) {
		uVar12 = 0x200;
	  }
	  lVar13 = hookret(0x140001a90);
	  cVar3 = hookret(0x140038a10,lVar13 + 0x38);
	  if (cVar3 != '\0') {
		uVar9 = hookret(0x140004740);
		plVar10 = hookret(0x140131410,uVar9,100,0x1f,param_1,uVar14,0xffffffff,&DAT_140d760b0,param_1,
								0xffffffff,local_48,4,3,(longlong *)0x0);
		if (plVar10 != (longlong *)0x0) {
		  (**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		  hook(0x1400604e0,(longlong)plVar10,param_1);
		  hook(0x140060360,(longlong)plVar10,uVar12 | 0xc0);
		  hook(0x140077ac0,(longlong)plVar10,0x40);
		  plVar11 = (longlong *)hookret(0x140003160);
		  hook(0x14051a6b0,plVar11,0xd,plVar10,0);
		}
	  }
	  uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
	  uVar15 = uVar15 + 1;
	} while (uVar15 < uVar16);
  }
  return;


POSTCHARACTER();
}
void UndefinedFunction_140074470(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 auStack56 [2];

  hook(0x14004bd30,param_1);
  iVar5 = *(int *)((longlong)param_1 + 0x68f4);
  *(undefined4 *)((longlong)param_1 + 0x68f4) = *(undefined4 *)(param_1 + 0x2a2);
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar3 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400725d0,(longlong)param_1);
  uVar10 = *(uint *)(param_1 + 0x29f) >> 0x16;
  if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) == 0) {
	if (iVar5 < 0) {
	  hookret(0x14004d420,(longlong)param_1,'\x01');
	  hook(0x14004d3e0,(longlong)param_1,0,0x7e);
	  hook(0x14004d3e0,(longlong)param_1,0,0x7f);
	  hook(0x14004d0f0,param_1,0xffffffff);
	}
  }
  else {
	hookret(0x14004d420,(longlong)param_1,'\0');
  }
  uVar4 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar4 == '\0') {
	return;
  }
  uVar4 = hookret(0x14004b070,(longlong)param_1,2);
  uVar12 = 10;
  if (((char)uVar4 == '\0') && (uVar4 = hookret(0x14004b070,(longlong)param_1,10), (char)uVar4 == '\0' )) {
	bVar1 = false;
  }
  else {
	bVar1 = true;
  }
  uVar4 = hookret(0x14004b070,(longlong)param_1,3);
  uVar11 = 0xb;
  if (((char)uVar4 == '\0') && (uVar4 = hookret(0x14004b070,(longlong)param_1,0xb), (char)uVar4 == '\0 '))
  {
	bVar2 = false;
  }
  else {
	bVar2 = true;
  }
  if ((int)*(uint *)(param_1 + 0x2a2) < 0) {
LAB_140074629:
	if (!bVar1) {
LAB_1400746ac:
	  hook(0x14004d3e0,(longlong)param_1,0,2);
	  bVar9 = 0;
	  uVar4 = uVar12;
	  goto LAB_1400746be;
	}
  }
  else {
	if ((*(uint *)(param_1 + 0x2a2) & 0x40000000) != (*(uint *)(param_1 + 0x29f) & 0x400000)) {
	  lVar6 = hookret(0x14002f960,(longlong)param_1,0);
	  if (((lVar6 == 0) || (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 == '\0')) ||
		 (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 == '\0')) {
		bVar1 = true;
	  }
	  else {
		bVar1 = false;
	  }
	  lVar6 = hookret(0x14002f960,(longlong)param_1,1);
	  if (((lVar6 == 0) || (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 == '\0')) ||
		 (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 == '\0')) {
		bVar2 = true;
	  }
	  else {
		bVar2 = false;
	  }
	  goto LAB_140074629;
	}
	lVar6 = hookret(0x14002f960,(longlong)param_1,0);
	if (((lVar6 == 0) || (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 == '\0')) ||
	   (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 == '\0')) {
	  bVar2 = true;
	}
	else {
	  bVar2 = false;
	}
	lVar6 = hookret(0x14002f960,(longlong)param_1,1);
	if (((lVar6 != 0) && (uVar4 = hookret(0x14002fa70,lVar6), (char)uVar4 != '\0')) &&
	   (uVar4 = hookret(0x140015e30,lVar6), (char)uVar4 != '\0')) goto LAB_1400746ac;
  }
  uVar4 = uVar12;
  if ((uVar10 & 1) != 0) {
	uVar4 = 2;
  }
  hook(0x14004d3e0,(longlong)param_1,0,uVar4);
  bVar9 = 1;
  uVar4 = 2;
  if ((uVar10 & 1) != 0) {
	uVar4 = uVar12;
  }
LAB_1400746be:
  hook(0x14004d3e0,(longlong)param_1,bVar9,uVar4);
  if (bVar2) {
	uVar4 = uVar11;
	if ((uVar10 & 1) != 0) {
	  uVar4 = 3;
	}
	hook(0x14004d3e0,(longlong)param_1,0,uVar4);
	bVar9 = 1;
	uVar4 = 3;
	if ((uVar10 & 1) != 0) {
	  uVar4 = uVar11;
	}
  }
  else {
	hook(0x14004d3e0,(longlong)param_1,0,3);
	bVar9 = 0;
	uVar4 = uVar11;
  }
  hook(0x14004d3e0,(longlong)param_1,bVar9,uVar4);
  uVar4 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar4 != '\0') {
	uVar4 = 0xc;
	if ((uVar10 & 1) != 0) {
	  uVar4 = 4;
	}
	hook(0x14004d3e0,(longlong)param_1,0,uVar4);
	uVar4 = 4;
	if ((uVar10 & 1) != 0) {
	  uVar4 = 0xc;
	}
	hook(0x14004d3e0,(longlong)param_1,1,uVar4);
  }
  if (((*(char *)(param_1 + 0xd26) != '\0') &&
	  (iVar5 = (**(code **)(*param_1 + 0x180))(param_1), iVar5 != 0x154)) &&
	 (20.0 < *(float *)((longlong)param_1 + 0x132c))) {
	puVar7 = hookret(0x140004ae0,(longlong)param_1,auStack56);
	puVar8 = hookret(0x140003aa0);
	hook(0x1402aa5e0,(longlong)puVar8,puVar7,0x23,0xffffffffffffffff);
	*(undefined *)(param_1 + 0xd26) = 0;
  }
  return;


POSTCHARACTER();
}
void FUN_1400700a0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((param_1[0xd21] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd21]), bVar1 == false)) {
	param_1[0xd21] = 0;
  }
  if ((param_1[0xd22] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd22]), bVar1 == false)) {
	param_1[0xd22] = 0;
  }
  if ((param_1[0xd23] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd23]), bVar1 == false)) {
	param_1[0xd23] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x140071920,param_1);
  hook(0x140071e70,(longlong)param_1);
  hook(0x140071b90,(longlong)param_1);
  hook(0x140071bf0,param_1);
  lVar2 = hookret(0x1400240f0,(longlong)(param_1 + 0x2ac),0x11);
  if (lVar2 != 0) {
	hookret(0x1400711b0,param_1);
  }
  if ((*(byte *)(param_1 + 0x2a2) & 8) == 0) {
	if (*(char *)(param_1 + 0xd1f) == '\0') {
	  bVar3 = 1;
	  goto LAB_140070187;
	}
  }
  else {
	bVar3 = 0;
LAB_140070187:
	hook(0x14004d3e0,(longlong)param_1,bVar3,0x11);
  }
  if ((*(byte *)(param_1 + 0x2a2) & 0x10) == 0) {
	if (*(char *)(param_1 + 0xd1f) != '\0') goto LAB_1400701bb;
	bVar3 = 1;
  }
  else {
	bVar3 = 0;
  }
  hook(0x14004d3e0,(longlong)param_1,bVar3,0x12);
LAB_1400701bb:
  hook(0x140071020,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	hook(0x14004d3e0,*(longlong *)param_1[0x7e8],0,2);
	uVar4 = 1;
  }
  else {
	hook(0x14004d3e0,*(longlong *)param_1[0x7e8],0,1);
	uVar4 = 2;
  }
  hook(0x14004d3e0,*(longlong *)param_1[0x7e8],1,uVar4);
  hook(0x140071d30,(longlong)param_1);
  return;


POSTCHARACTER();
}
void FUN_14006d670(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (param_1[0xd20] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar1 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  if ((((*(uint *)(param_1 + 0x29f) & 0x1000) != 0) && (*(char *)(param_1 + 0xd1f) == '\0')) &&
	 (*(float *)((longlong)param_1 + 0x54) <= 200.0)) {
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar2 != 0xf) {
	  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar2 != 0x10) {
		iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
		if (iVar2 != 0x11) {
		  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
		  if (iVar2 != 0x13) {
			iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
			if (iVar2 != 0x14) {
			  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
			  if (iVar2 != 0x15) goto LAB_14006d815;
			}
		  }
		}
	  }
	}
	uVar4 = hookret(0x140004740);
	plVar5 = hookret(0x140131660,uVar4,100,0xd,param_1,8,0xffffffff,3,(longlong *)0x0);
	param_1[0xd1e] = (longlong)plVar5;
	if (plVar5 != (longlong *)0x0) {
	  hookret(0x1400604e0,(longlong)plVar5,param_1);
	  (**(code **)(*(longlong *)param_1[0xd1e] + 0xa8))((longlong *)param_1[0xd1e],param_1);
	  hook(0x140060360,param_1[0xd1e],0x20d0);
	  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
	  hook(0x1400604f0,param_1[0xd1e],uVar3);
	  plVar5 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar5,0xd,(longlong *)param_1[0xd1e],0);
	}
	*(undefined *)(param_1 + 0xd1f) = 1;
  }
LAB_14006d815:
  hook(0x14006d9d0,param_1);
  iVar2 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar2 != 7) {
	return;
  }
  if ((*(byte *)(param_1 + 0x2a2) & 0x10) != 0) {
	hookret(0x14004d3e0,(longlong)param_1,1,0x50);
	return;
  }
  hookret(0x14004d3e0,(longlong)param_1,0,0x50);
  return;


POSTCHARACTER();
}
void FUN_14006b7c0(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1f] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1f]);
	if (bVar1 == false) {
	  param_1[0xd1f] = 0;
	}
  }
  hook(0x14006bad0,param_1);
  uVar2 = hookret(0x140056380,(longlong)param_1,'\x01');
  if ((char)uVar2 != '\0') {
	puVar3 = hookret(0x140004a50,(longlong)param_1,local_18);
	puVar4 = hookret(0x140003aa0);
	hook(0x1402aa5e0,(longlong)puVar4,puVar3,0xb,0xffffffffffffffff);
  }
  return;


POSTCHARACTER();
}
void FUN_140069310(longlong *param_1)

{
PRECHARACTER(param_1);;

  float extraout_XMM0_Da;

  hook(0x14004bd30,param_1);
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140069a70,(longlong)param_1);
	if (((*(uint *)(param_1 + 0x2a2) & 0x10) != 0) && (-1 < (char)*(uint *)(param_1 + 0x2a2))) {
	  hookret(0x14000cee0,(longlong)param_1);
	  *(float *)(param_1 + 0xd1e) = extraout_XMM0_Da + *(float *)(param_1 + 0xd1e);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140066c20(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined6 extraout_var;
  longlong *plVar7;
  byte bVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar9;

  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  lVar5 = hookret(0x14002f960,(longlong)param_1,0);
  if (lVar5 != 0) {
	lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	uVar3 = hookret(0x140015e30,lVar5);
	uVar6 = hookret(0x140066b00,(longlong)param_1);
	lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	hook(0x140037700,lVar5,(char)uVar6);
	lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
	uVar2 = hookret(0x140032f40,lVar5);
	if ((char)uVar3 == '\0') {
	  lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	  uVar3 = hookret(0x140015e30,lVar5);
	  if (((char)uVar3 != '\0') && ((int)CONCAT62(extraout_var,uVar2) - 0x300U < 0x100)) {
		plVar7 = (longlong *)hookret(0x14002f960,(longlong)param_1,0);
		(**(code **)(*plVar7 + 0xd0))(plVar7);
	  }
	}
  }
  uVar6 = hookret(0x140066b00,(longlong)param_1);
  if ((char)uVar6 == '\0') {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0xfffffffe;
  }
  else {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 1;
  }
  hook(0x14004bd30,param_1);
  iVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((iVar4 != 0x1c2) && ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0)) {
	uVar3 = hookret(0x14004b070,(longlong)param_1,0);
	if ((char)uVar3 != '\0') {
	  if (((*(uint *)(param_1 + 0x2a2) & 1) == 0) || ((*(uint *)(param_1 + 0x2a2) & 2) == 0)) {
		bVar8 = 0;
	  }
	  else {
		bVar8 = 1;
	  }
	  hook(0x14004d3e0,(longlong)param_1,bVar8,6);
	}
	lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	if (lVar5 != 0) {
	  lVar5 = hookret(0x14004cab0,(longlong)param_1,0);
	  hook(0x1407a3ec0,lVar5);
	  uVar9 = extraout_XMM0_Da;
	  lVar5 = hookret(0x14002f960,(longlong)param_1,0);
	  lVar5 = hookret(0x14004cab0,lVar5,0);
	  hook(0x1400424b0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_00),uVar9,lVar5);
	  hook(0x140067320,(longlong)param_1);
	}
  }
  return;


POSTCHARACTER();
}
void FUN_140063a90(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if ((param_1[0xd1e] != 0) && (bVar1 = hookret(0x140001b80,param_1[0xd1e]), bVar1 == false)) {
	param_1[0xd1e] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x140064dd0,(longlong)param_1);
	hook(0x140064bb0,(longlong)param_1);
	hook(0x140064d50,(longlong)param_1);
	if ((*(byte *)(param_1 + 0x2a2) & 0x80) == 0) {
	  bVar1 = hookret(0x1400557e0,(longlong)(param_1 + 0xd22),-1);
	  if (bVar1 == false) {
		return;
	  }
	  iVar2 = hookret(0x140004a40,(longlong)param_1);
	  puVar3 = hookret(0x140004a50,(longlong)param_1,local_18);
	  puVar4 = hookret(0x140003aa0);
	  hook(0x1402aa5e0,(longlong)puVar4,puVar3,0x13,(longlong)iVar2);
	  hook(0x1400239c0,local_28,0xffffffffffffffff);
	  puVar3 = local_28;
	}
	else {
	  bVar1 = hookret(0x140061580,(longlong)(param_1 + 0xd22),-1);
	  if (bVar1 == false) {
		return;
	  }
	  iVar2 = hookret(0x140004a40,(longlong)param_1);
	  puVar3 = hookret(0x140004a50,(longlong)param_1,local_28);
	  puVar4 = hookret(0x140003aa0);
	  puVar3 = hookret(0x1402aad60,(longlong)puVar4,local_18,puVar3,0x13,(longlong)iVar2,param_1,0,
							 0x3f800000,(longlong)param_1);
	}
	thunk_hook(0x14000b010,(longlong)(param_1 + 0xd22),(longlong)puVar3);
  }
  return;


POSTCHARACTER();
}
void FUN_1400e2800(longlong *param_1)

{
PRECHARACTER(param_1);;

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 local_38 [2];
  undefined8 local_28 [2];

  uVar6 = hookret(0x140066b00,(longlong)param_1);
  lVar7 = hookret(0x140079d30,(longlong)param_1);
  if (lVar7 != 0) {
	lVar7 = hookret(0x140079d30,(longlong)param_1);
	bVar2 = hookret(0x140001b80,lVar7);
	if (bVar2 == false) {
	  hookret(0x14007a060,(longlong)param_1,0);
	}
  }
  lVar7 = hookret(0x1400e2620,(longlong)param_1,0);
  if (lVar7 != 0) {
	lVar7 = hookret(0x1400e2620,(longlong)param_1,0);
	bVar2 = hookret(0x140001b80,lVar7);
	if (bVar2 == false) {
	  hookret(0x1400e2da0,(longlong)param_1,0,0);
	}
  }
  lVar7 = hookret(0x1400e2620,(longlong)param_1,1);
  if (lVar7 != 0) {
	lVar7 = hookret(0x1400e2620,(longlong)param_1,1);
	bVar2 = hookret(0x140001b80,lVar7);
	if (bVar2 == false) {
	  hookret(0x1400e2da0,(longlong)param_1,0,1);
	}
  }
  uVar5 = *(uint *)(param_1 + 0x29f);
  hook(0x14004bd30,param_1);
  uVar8 = hookret(0x140066b00,(longlong)param_1);
  if ((char)uVar6 != (char)uVar8) {
	if ((char)uVar6 == '\0') {
	  iVar3 = hookret(0x140004a40,(longlong)param_1);
	  puVar9 = hookret(0x140004a50,(longlong)param_1,local_38);
	  puVar10 = hookret(0x140003aa0);
	  hook(0x1402aad60,(longlong)puVar10,local_28,puVar9,2,(longlong)iVar3,param_1,0,0x3f800000,
					(longlong)param_1);
	  *(undefined4 *)((longlong)param_1 + 0x6804) = 3;
	}
	else {
	  *(undefined4 *)((longlong)param_1 + 0x6804) = 0;
	}
  }
  iVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar3 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  hook(0x1400e0e10,(longlong)param_1);
  uVar1 = *(uint *)(param_1 + 0x29f);
  hook(0x1400e3370,(longlong)param_1);
  lVar7 = hookret(0x14002f960,(longlong)param_1,0);
  if (lVar7 != 0) {
	lVar7 = hookret(0x14002f960,(longlong)param_1,0);
	uVar4 = hookret(0x140015e30,lVar7);
	if (((char)uVar4 == '\0') && (uVar6 = hookret(0x140066b00,(longlong)param_1), (char)uVar6 == '\x01 '))
	{
	  lVar7 = hookret(0x14002f960,(longlong)param_1,0);
	  hook(0x140037700,lVar7,'\x01');
	}
  }
  lVar7 = hookret(0x14002f960,(longlong)param_1,0);
  if (lVar7 != 0) {
	plVar11 = (longlong *)hookret(0x140056010,(longlong)param_1,0xe);
	if ((((byte)(uVar1 >> 0x16) & 1) != ((byte)(uVar5 >> 0x16) & 1)) && (plVar11 != (longlong *)0 x0)
	   ) {
	  param_1[0xcf7] = 0;
	  (**(code **)(*plVar11 + 0xd8))(plVar11);
	  plVar11 = (longlong *)0x0;
	}
	uVar6 = hookret(0x140066b00,(longlong)param_1);
	if (((char)uVar6 == '\0') || (plVar11 != (longlong *)0x0)) {
	  uVar6 = hookret(0x140066b00,(longlong)param_1);
	  if (((char)uVar6 != '\0') || (plVar11 == (longlong *)0x0)) goto LAB_1400e2b18;
	  plVar11 = (longlong *)0x0;
	}
	else {
	  uVar5 = 0x80000000;
	  if ((uVar1 >> 0x16 & 1) != 0) {
		uVar5 = 0x40000000;
	  }
	  uVar12 = hookret(0x140004740);
	  plVar11 = hookret(0x140131310,uVar12,0x96,0xc,param_1,0xffffffff,~uVar5,&DAT_140d2acf0,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar11 == (longlong *)0x0) goto LAB_1400e2b18;
	  lVar7 = *plVar11;
	  uVar12 = hookret(0x14002f960,(longlong)param_1,0);
	  (**(code **)(lVar7 + 0xa8))(plVar11,uVar12);
	  hook(0x1400604e0,(longlong)plVar11,param_1);
	  hook(0x140060360,(longlong)plVar11,0x221228e0);
	  plVar13 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar13,0xd,plVar11,0);
	}
	hook(0x140056f30,(longlong)param_1,0xe,plVar11);
  }
LAB_1400e2b18:
  plVar11 = (longlong *)hookret(0x140056010,(longlong)param_1,0xf);
  if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) || (plVar11 != (longlong *)0x0)) {
	if (((*(uint *)(param_1 + 0x2a1) & 0x100000) == 0) && (plVar11 != (longlong *)0x0)) {
	  param_1[0xcf8] = 0;
	  (**(code **)(*plVar11 + 0xd8))();
	}
  }
  else {
	uVar12 = hookret(0x140004740);
	plVar11 = hookret(0x140131310,uVar12,100,0x14,param_1,0xffffffff,0xffffffff,&DAT_140d2acf0,
							&DAT_140d76030,4,3,(longlong *)0x0);
	if (plVar11 != (longlong *)0x0) {
	  (**(code **)(*plVar11 + 0xa8))(plVar11,param_1);
	  hook(0x1400604e0,(longlong)plVar11,param_1);
	  hook(0x140060360,(longlong)plVar11,0x221228e0);
	  plVar13 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar13,0xd,plVar11,0);
	  hook(0x140056f30,(longlong)param_1,0xf,plVar11);
	}
  }
  return;



POSTCHARACTER();
}
void FUN_1400dff60(longlong *param_1)

{
PRECHARACTER(param_1);;

  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float extraout_XMM0_Da;
  float fVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined8 local_38 [2];
  undefined8 local_28 [4];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar1 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (param_1[0xd1f] != 0) {
	bVar1 = hookret(0x140001b80,param_1[0xd1f]);
	if (bVar1 == false) {
	  param_1[0xd1f] = 0;
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	hookret(0x1400e09c0,(longlong)param_1);
	uVar4 = hookret(0x140041e50,(longlong)param_1);
	if (((uVar4 & 0x10) != 0) && (*(char *)(param_1 + 0xd20) == '\0')) {
	  uVar5 = hookret(0x140004740);
	  plVar6 = hookret(0x140131660,uVar5,100,0x1c,param_1,1,0xffffffff,3,(longlong *)0x0);
	  param_1[0xd1f] = (longlong)plVar6;
	  if (plVar6 != (longlong *)0x0) {
		hookret(0x1400604e0,(longlong)plVar6,param_1);
		(**(code **)(*(longlong *)param_1[0xd1f] + 0xa8))((longlong *)param_1[0xd1f],param_1);
		hook(0x140060360,param_1[0xd1f],0x1020c0);
		plVar6 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar6,0xd,(longlong *)param_1[0xd1f],0);
	  }
	  *(undefined *)(param_1 + 0xd20) = 1;
	}
	uVar4 = hookret(0x140041e50,(longlong)param_1);
	if (((uVar4 & 0x10) == 0) && (*(char *)(param_1 + 0xd20) != '\0')) {
	  if (param_1[0xd1f] != 0) {
		bVar1 = hookret(0x140001b80,param_1[0xd1f]);
		if (bVar1 == false) {
		  param_1[0xd1f] = 0;
		}
	  }
	  plVar6 = (longlong *)param_1[0xd1f];
	  if (plVar6 != (longlong *)0x0) {
		bVar1 = hookret(0x140001b80,(longlong)plVar6);
		if (bVar1 != false) {
		  (**(code **)(*plVar6 + 0xd8))(plVar6);
		  param_1[0xd1f] = 0;
		}
	  }
	  *(undefined *)(param_1 + 0xd20) = 0;
	}
	if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
	  *(undefined4 *)((longlong)param_1 + 0x6904) = 0;
	  *(undefined *)((longlong)param_1 + 0x6914) = 0;
	  if (*(int *)(param_1 + 0xd21) != 0) {
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x4d,(longlong)iVar3);
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x4e,(longlong)iVar3);
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x4f,(longlong)iVar3);
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		puVar9 = hookret(0x140003aa0);
		hook(0x1402aa5e0,(longlong)puVar9,puVar8,0x6f,(longlong)iVar3);
		*(undefined4 *)(param_1 + 0xd21) = 0;
		lVar10 = hookret(0x14004cab0,(longlong)param_1,3);
		if (lVar10 != 0) {
		  hookret(0x1405297e0,lVar10,0xffff);
		}
	  }
	}
	else {
	  if (*(char *)((longlong)param_1 + 0x6914) == '\0') {
		puVar7 = (uint *)hookret(0x1400046d0);
		uVar2 = thunk_hookret(0x1404600f0,puVar7);
		*(undefined *)((longlong)param_1 + 0x6914) = 1;
		*(uint *)(param_1 + 0xd22) = uVar2 & 1;
	  }
	  hook(0x14000cee0,(longlong)param_1);
	  uVar12 = 0x3f800000;
	  fVar11 = extraout_XMM0_Da + *(float *)((longlong)param_1 + 0x6904);
	  *(float *)((longlong)param_1 + 0x6904) = fVar11;
	  iVar3 = -1;
	  if ((*(int *)(param_1 + 0xd21) == 0) && (iVar3 = -1, 30.0 < fVar11)) {
		iVar3 = hookret(0x140004a40,(longlong)param_1);
		if (*(int *)(param_1 + 0xd22) == 0) {
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_38);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_28,puVar8,0x4d,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xf8;
		}
		else {
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_38,puVar8,0x6f,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xff;
		}
		*(int *)(param_1 + 0xd21) = *(int *)(param_1 + 0xd21) + 1;
	  }
	  if ((*(int *)(param_1 + 0xd21) == 1) && (180.0 < *(float *)((longlong)param_1 + 0x6904))) {
		if (*(int *)(param_1 + 0xd22) == 0) {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_38,puVar8,0x4e,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xf9;
		}
		*(int *)(param_1 + 0xd21) = *(int *)(param_1 + 0xd21) + 1;
	  }
	  if ((*(int *)(param_1 + 0xd21) == 2) && (580.0 < *(float *)((longlong)param_1 + 0x6904))) {
		if (*(int *)(param_1 + 0xd22) == 0) {
		  iVar3 = hookret(0x140004a40,(longlong)param_1);
		  puVar8 = hookret(0x140004ae0,(longlong)param_1,local_28);
		  puVar9 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar9,local_38,puVar8,0x4f,(longlong)iVar3,param_1,7,uVar12,
						(longlong)param_1);
		  iVar3 = 0xfa;
		}
		*(int *)(param_1 + 0xd21) = *(int *)(param_1 + 0xd21) + 1;
	  }
	  if ((*(int *)(param_1 + 0xd21) == 3) && (820.0 < *(float *)((longlong)param_1 + 0x6904))) {
		*(undefined8 *)((longlong)param_1 + 0x6904) = 0;
	  }
	  if (-1 < iVar3) {
		lVar10 = hookret(0x140528cb0,(longlong)param_1,iVar3 + 0x400U);
		if (lVar10 != 0) {
		  (**(code **)(*param_1 + 0xd8))(param_1,3,iVar3 + 0x400U);
		  lVar10 = hookret(0x14004cab0,(longlong)param_1,3);
		  if (lVar10 != 0) {
			hookret(0x1400e06e0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_00),uVar12,lVar10);
		  }
		}
	  }
	}
	hook(0x1400e0960,(longlong)param_1);
  }
  return;



POSTCHARACTER();
}
void FUN_1400dd840(longlong *param_1)

{
PRECHARACTER(param_1);;

  longlong lVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;

  hook(0x14004bd30,param_1);
  if ((param_1[0xd22] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd22]), bVar2 == false)) {
	param_1[0xd22] = 0;
  }
  hook(0x1400dbe70,(longlong)param_1);
  if ((*(uint *)(param_1 + 0x2a2) & 0x80000000) != 0) {
	pfVar4 = (float *)hookret(0x1400daa30,(longlong)param_1);
	pfVar5 = (float *)hookret(0x140001b50,(longlong)param_1);
	hook(0x14000bfd0,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),pfVar5,
				  (undefined4 *)&stack0xffffffffffffffd8,pfVar4);
	hook(0x1400dd790,(longlong)param_1);
	uVar7 = hookret(0x14001bad0,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),extraout_XMM0_Da_00,
						  (float *)&stack0xffffffffffffffd8);
	puVar6 = hookret(0x140001210,uVar7,pfVar4,(undefined4 *)&stack0xffffffffffffffe8,
						   (float *)&stack0xffffffffffffffd8);
	hook(0x14000bf40,(undefined4 *)(param_1 + 10),puVar6);
	if (((*(uint *)(param_1 + 0x29f) & 0x2000) != 0) &&
	   (iVar3 = hookret(0x1400dd760,(longlong)param_1), -1 < iVar3)) {
	  *(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) | 2;
	  lVar1 = *param_1;
	  hookret(0x1400dd760,(longlong)param_1);
	  (**(code **)(lVar1 + 400))(param_1);
	  hook(0x1400dda30,(longlong)param_1,0xffffffff);
	}
  }
  hook(0x1400ddf40,(longlong)param_1);
  iVar3 = hookret(0x1400383e0,(longlong)param_1);
  if (iVar3 != 7) {
	return;
  }
  iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
  if ((iVar3 == 1) && (*(char *)((longlong)param_1 + 0x690c) == '\0')) {
	if ((param_1[0xd22] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd22]), bVar2 == false)) {
	  param_1[0xd22] = 0;
	}
	plVar8 = (longlong *)param_1[0xd22];
	if ((plVar8 != (longlong *)0x0) && (bVar2 = hookret(0x140001b80,(longlong)plVar8), bVar2 != false) ) {
	  (**(code **)(*plVar8 + 0x78))(plVar8);
	  param_1[0xd22] = 0;
	}
  }
  iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
  if ((iVar3 == 0) && (*(char *)((longlong)param_1 + 0x690c) != '\0')) {
	if ((param_1[0xd22] != 0) && (bVar2 = hookret(0x140001b80,param_1[0xd22]), bVar2 == false)) {
	  param_1[0xd22] = 0;
	}
	plVar8 = (longlong *)param_1[0xd22];
	if ((plVar8 != (longlong *)0x0) && (bVar2 = hookret(0x140001b80,(longlong)plVar8), bVar2 != false) ) {
	  (**(code **)(*plVar8 + 0x78))(plVar8);
	  param_1[0xd22] = 0;
	}
  }
  if (param_1[0xd22] != 0) {
	return;
  }
  iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
  if (iVar3 == 1) {
	uVar7 = hookret(0x140004740);
	plVar8 = hookret(0x140131660,uVar7,100,0x1e,param_1,2,0xffffffff,3,(longlong *)0x0);
	*(undefined *)((longlong)param_1 + 0x690c) = 1;
  }
  else {
	iVar3 = hookret(0x1400129c0,(longlong)(param_1 + 0x5ae));
	if (iVar3 != 0) goto LAB_1400de1da;
	uVar7 = hookret(0x140004740);
	plVar8 = hookret(0x140131660,uVar7,100,0x1e,param_1,1,0xffffffff,3,(longlong *)0x0);
	*(undefined *)((longlong)param_1 + 0x690c) = 0;
  }
  param_1[0xd22] = (longlong)plVar8;
LAB_1400de1da:
  plVar8 = (longlong *)param_1[0xd22];
  if (plVar8 != (longlong *)0x0) {
	(**(code **)(*plVar8 + 0xa8))(plVar8,*(undefined8 *)(param_1[0x7e8] + 0x18));
	hook(0x1400604e0,param_1[0xd22],param_1);
	hook(0x140060360,param_1[0xd22],0x221028c0);
	plVar8 = (longlong *)hookret(0x140003160);
	hook(0x14051a6b0,plVar8,0xd,(longlong *)param_1[0xd22],0);
  }
  return;



POSTCHARACTER();
}
void UndefinedFunction_1400dabd0(longlong *param_1)

{
PRECHARACTER(param_1);;

  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float afStack280 [4];
  undefined4 auStack264 [4];
  undefined4 auStack248 [16];
  undefined auStack184 [64];
  undefined auStack120 [96];

  hook(0x14004bd30,param_1);
  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar2 == 0x1c2) {
	return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) != 0) {
	return;
  }
  uVar3 = hookret(0x14004b070,(longlong)param_1,0);
  if ((char)uVar3 != '\0') {
	hookret(0x1400db800,(longlong)param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x2a2);
  if ((uVar3 & 1) == 0) {
LAB_1400dac96:
	if ((uVar3 & 2) == 0) goto LAB_1400dae21;
  }
  else {
	hook(0x14000b8c0,(ulonglong)*(uint *)(param_1 + 0x81c));
	fVar14 = 0.0001;
	if ((extraout_XMM0_Da <= 0.0001) ||
	   (hook(0x14000b8c0,(ulonglong)*(uint *)(param_1 + 0x81d)), extraout_XMM0_Da_00 <= fVar14))
	goto LAB_1400dac96;
  }
  fVar14 = *(float *)(param_1 + 0x81d);
  uVar4 = *(undefined4 *)(param_1 + 0x81c);
  uVar12 = *(uint *)(param_1 + 0x29f) >> 0x16;
  if ((uVar12 & 1) != 0) {
	fVar14 = (float)((uint)fVar14 ^ 0x80000000);
  }
  if ((uVar3 & 2) != 0) {
	puVar5 = (undefined4 *)hookret(0x1400daa30,(longlong)param_1);
	uVar4 = *puVar5;
	if ((uVar12 & 1) == 0) {
	  fVar14 = 1.0;
	}
	else {
	  fVar14 = -1.0;
	}
	fVar14 = fVar14 * (float)puVar5[1];
  }
  uVar15 = 0;
  hook(0x14000baa0,(longlong)auStack248);
  hook(0x14000baa0,(longlong)auStack184);
  if ((uVar12 & 1) == 0) {
	fVar13 = 90.0;
  }
  else {
	fVar13 = -90.0;
  }
  uVar9 = hookret(0x140080e70,CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_01),fVar13 * 0.01745329,
						(longlong)auStack184);
  pfVar6 = (float *)hookret(0x140001030,uVar9,uVar4,fVar14,0,auStack264);
  hook(0x1400db420,CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_02),CONCAT44(uVar15,uVar4),auStack 248,
				pfVar6,(float *)&DAT_140d2ab80,&DAT_140d76030);
  hook(0x1402f44c0,afStack280,&DAT_140d2acf0);
  lVar7 = hookret(0x14000df60,(longlong)auStack184,(longlong)auStack120,(longlong)auStack248);
  hook(0x14002fce0,afStack280,lVar7);
  hook(0x14002fc40,(longlong)param_1,afStack280);
  puVar5 = (undefined4 *)hookret(0x140001b50,(longlong)param_1);
  if (((float)puVar5[1] <= 70.0 && (float)puVar5[1] != 70.0) &&
	 ((*(byte *)(param_1 + 0x2a2) & 2) == 0)) {
	puVar8 = hookret(0x140001030,CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),*puVar5,0x428c0000,
						   puVar5[2],auStack264);
	hook(0x140002af0,(longlong)param_1,puVar8);
  }
  if (80.0 < (float)puVar5[1] || (float)puVar5[1] == 80.0) {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) & 0x7fffffff;
  }
  else {
	*(uint *)(param_1 + 0x2a2) = *(uint *)(param_1 + 0x2a2) | 0x80000000;
  }
LAB_1400dae21:
  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar2 == 0x28) {
	uVar3 = 1;
  }
  else {
	iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar2 == 0x29) {
	  uVar3 = 2;
	}
	else {
	  iVar2 = (**(code **)(*param_1 + 0x180))(param_1);
	  if (iVar2 != 0x2a) {
		return;
	  }
	  uVar3 = 3;
	}
  }
  lVar7 = hookret(0x140001a90);
  cVar1 = hookret(0x140038a10,lVar7 + 0x38);
  if (cVar1 != '\0') {
	uVar4 = 0x80000000;
	if ((*(uint *)(param_1 + 0x29f) & 0x400000) == 0) {
	  uVar4 = 0x40000000;
	}
	if (uVar3 < 3) {
	  uVar9 = hookret(0x140004740);
	  plVar10 = hookret(0x140131410,uVar9,100,0x11,param_1,1,uVar4,&DAT_140d2acf0,param_1,0xffffffff,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar10 != (longlong *)0x0) {
		(**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		hook(0x1400604e0,(longlong)plVar10,param_1);
		hook(0x140060360,(longlong)plVar10,0xc0);
		hook(0x140077ac0,(longlong)plVar10,0x40);
		plVar11 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	  }
	  uVar9 = hookret(0x140004740);
	  plVar10 = hookret(0x140131410,uVar9,100,0x11,param_1,2,uVar4,&DAT_140d2acf0,param_1,0xffffffff,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar10 != (longlong *)0x0) {
		(**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		hook(0x1400604e0,(longlong)plVar10,param_1);
		hook(0x140060360,(longlong)plVar10,0xc0);
		hook(0x140077ac0,(longlong)plVar10,0x40);
		plVar11 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	  }
	  uVar9 = hookret(0x140004740);
	  uVar15 = 0x20;
	}
	else {
	  if (uVar3 != 3) {
		return;
	  }
	  uVar9 = hookret(0x140004740);
	  plVar10 = hookret(0x140131410,uVar9,100,0x11,param_1,1,uVar4,&DAT_140d2acf0,param_1,0xffffffff,
							  &DAT_140d76030,4,3,(longlong *)0x0);
	  if (plVar10 != (longlong *)0x0) {
		(**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
		hook(0x1400604e0,(longlong)plVar10,param_1);
		hook(0x140060360,(longlong)plVar10,0xc0);
		hook(0x140077ac0,(longlong)plVar10,0x40);
		plVar11 = (longlong *)hookret(0x140003160);
		hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	  }
	  uVar9 = hookret(0x140004740);
	  uVar15 = 0x40;
	}
	plVar10 = hookret(0x140131410,uVar9,0x96,10,param_1,uVar15,uVar4,&DAT_140d2acf0,param_1,0xffffffff ,
							&DAT_140d76030,4,3,(longlong *)0x0);
	if (plVar10 != (longlong *)0x0) {
	  (**(code **)(*plVar10 + 0xa8))(plVar10,param_1);
	  hook(0x1400604e0,(longlong)plVar10,param_1);
	  hook(0x140060360,(longlong)plVar10,0xc0);
	  hook(0x140077ac0,(longlong)plVar10,0x40);
	  plVar11 = (longlong *)hookret(0x140003160);
	  hook(0x14051a6b0,plVar11,0xd,plVar10,0);
	}
  }
  return;



POSTCHARACTER();
}
void FUN_1400d76d0(longlong *param_1)

{
PRECHARACTER(param_1);;

  float fVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float extraout_XMM0_Da;
  undefined8 local_28 [2];
  undefined8 local_18 [2];

  hook(0x14004bd30,param_1);
  if (param_1[0xd1e] != 0) {
	bVar4 = hookret(0x140001b80,param_1[0xd1e]);
	if (bVar4 == false) {
	  param_1[0xd1e] = 0;
	}
  }
  if (param_1[0xd1f] != 0) {
	bVar4 = hookret(0x140001b80,param_1[0xd1f]);
	if (bVar4 == false) {
	  param_1[0xd1f] = 0;
	}
  }
  if (param_1[0xd20] != 0) {
	bVar4 = hookret(0x140001b80,param_1[0xd20]);
	if (bVar4 == false) {
	  param_1[0xd20] = 0;
	}
  }
  if (param_1[0xd1e] != 0) {
	iVar5 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar5 == 0x1b8) {
	  if (param_1[0xd1e] != 0) {
		bVar4 = hookret(0x140001b80,param_1[0xd1e]);
		if (bVar4 == false) {
		  param_1[0xd1e] = 0;
		}
	  }
	  plVar2 = (longlong *)param_1[0xd1e];
	  if (plVar2 != (longlong *)0x0) {
		bVar4 = hookret(0x140001b80,(longlong)plVar2);
		if (bVar4 != false) {
		  (**(code **)(*plVar2 + 0x78))(plVar2);
		  param_1[0xd1e] = 0;
		}
	  }
	}
  }
  if ((*(byte *)((longlong)param_1 + 0x1514) & 0x10) == 0) {
	iVar5 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar5 != 0x1b8) {
	  hookret(0x1400d7ec0,param_1);
	}
	hook(0x1400d84d0,param_1);
	if (((((*(uint *)((longlong)param_1 + 0x14f4) >> 0xd & 1) != 0) &&
		 ((*(uint *)(param_1 + 0x29f) & 0x80000) != 0)) ||
		((*(uint *)((longlong)param_1 + 0x14f4) >> 0x11 & 1) != 0)) ||
	   ((*(byte *)(param_1 + 0x29f) & 1) != 0)) {
	  *(undefined *)(param_1 + 0x2a2) = 0;
	}
	if ((*(uint *)(param_1 + 0x2a2) & 0x100) == 0) {
	  if (param_1[0xd20] != 0) {
		bVar4 = hookret(0x140001b80,param_1[0xd20]);
		if (bVar4 == false) {
		  param_1[0xd20] = 0;
		}
		plVar2 = (longlong *)param_1[0xd20];
		if (plVar2 != (longlong *)0x0) {
		  bVar4 = hookret(0x140001b80,(longlong)plVar2);
		  if (bVar4 != false) {
			(**(code **)(*plVar2 + 0xd8))();
			param_1[0xd20] = 0;
		  }
		}
		if (((((*(float *)(param_1 + 0x81c) == 0.0) &&
			  (*(float *)((longlong)param_1 + 0x40e4) == 0.0)) &&
			 ((*(float *)(param_1 + 0x81d) == 0.0 &&
			  ((*(float *)((longlong)param_1 + 0x40ec) == 0.0 &&
			   (*(float *)(param_1 + 0x81e) == 0.0)))))) &&
			(*(float *)((longlong)param_1 + 0x40f4) == 0.0)) &&
		   (((*(float *)(param_1 + 0x81f) == 0.0 && (*(float *)((longlong)param_1 + 0x40fc) == 0. 0))
			&& (*(float *)(param_1 + 0x822) == 0.0)))) {
		  bVar4 = true;
		}
		else {
		  bVar4 = false;
		}
		if (((*(uint *)(param_1 + 0x2a1) & 8) == 0) &&
		   ((*(uint *)((longlong)param_1 + 0x14f4) & 0x200000) == 0)) {
		  bVar3 = false;
		}
		else {
		  bVar3 = true;
		}
		if ((!bVar4) && (!bVar3)) {
		  if ((*(uint *)(param_1 + 0x2a1) & 0x10) == 0) {
			*(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf400000;
		  }
		  else {
			*(undefined4 *)((longlong)param_1 + 0x40ec) = 0xbf2ed917;
		  }
		}
	  }
	}
	else {
	  hook(0x1400d7240,param_1);
	}
	iVar5 = (**(code **)(*param_1 + 0x180))(param_1);
	if (iVar5 == 0) {
	  hookret(0x14000cee0,(longlong)param_1);
	  fVar1 = *(float *)(param_1 + 0xd23);
	  *(float *)(param_1 + 0xd23) = extraout_XMM0_Da + fVar1;
	  if (70.0 < extraout_XMM0_Da + fVar1) {
		lVar7 = hookret(0x140001a90);
		iVar5 = hookret(0x140221120,lVar7);
		if ((iVar5 != 1) && (iVar5 != 0xc)) {
		  iVar5 = hookret(0x140004a40,(longlong)param_1);
		  puVar8 = (uint *)hookret(0x1400046d0);
		  uVar6 = thunk_hookret(0x1404600f0,puVar8);
		  puVar9 = hookret(0x140004a50,(longlong)param_1,local_28);
		  puVar10 = hookret(0x140003aa0);
		  hook(0x1402aad60,(longlong)puVar10,local_18,puVar9,uVar6 & 1,(longlong)iVar5,param_1,0,
						0x3f800000,(longlong)param_1);
		}
		*(undefined4 *)(param_1 + 0xd23) = 0;
	  }
	}
  }
  return;



POSTCHARACTER();
}*/
void hookCharacterTicks(Trampoline* tramp)
{
	InjectHook(_addr(0x1400f2eb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400d4b30), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400cdc90), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400cd200), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ca240), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400c84f0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400c4c10), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400be8f0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400bbba0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400f0d70), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400b8a00), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400b5010), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ae4a0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ac6e0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400aaeb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400a8830), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400a66e0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400a1410), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14009ceb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140099e30), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400edf80), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140097740), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140095b40), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140092b60), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140090810), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14008e370), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14008c3c0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140089400), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140081310), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14007d990), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14007ad00), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400ebbb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140079eb0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140077670), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140074470), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400700a0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14006d670), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14006b7c0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140069310), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140066c20), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x140063a90), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400e2800), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400dff60), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400dd840), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400dabd0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x1400d76d0), tramp->Jump(playercode), PATCH_JUMP);
	InjectHook(_addr(0x14001af4f), tramp->Jump(FUN_1400199c0), PATCH_CALL);
	InjectHook(_addr(0x1405b6c99), tramp->Jump(FUN_1405ab9a0), PATCH_CALL);
	/*InjectHook(_addr(0x1400f2eb0), tramp->Jump(UndefinedFunction_1400f2eb0), PATCH_JUMP);
	InjectHook(_addr(0x1400d4b30), tramp->Jump(FUN_1400d4b30), PATCH_JUMP);
	InjectHook(_addr(0x1400cdc90), tramp->Jump(FUN_1400cdc90), PATCH_JUMP);
	InjectHook(_addr(0x1400cd200), tramp->Jump(FUN_1400cd200), PATCH_JUMP);
	InjectHook(_addr(0x1400ca240), tramp->Jump(FUN_1400ca240), PATCH_JUMP);
	InjectHook(_addr(0x1400c84f0), tramp->Jump(UndefinedFunction_1400c84f0), PATCH_JUMP);
	InjectHook(_addr(0x1400c4c10), tramp->Jump(FUN_1400c4c10), PATCH_JUMP);
	InjectHook(_addr(0x1400be8f0), tramp->Jump(FUN_1400be8f0), PATCH_JUMP);
	InjectHook(_addr(0x1400bbba0), tramp->Jump(UndefinedFunction_1400bbba0), PATCH_JUMP);
	InjectHook(_addr(0x1400f0d70), tramp->Jump(FUN_1400f0d70), PATCH_JUMP);
	InjectHook(_addr(0x1400b8a00), tramp->Jump(UndefinedFunction_1400b8a00), PATCH_JUMP);
	InjectHook(_addr(0x1400b5010), tramp->Jump(FUN_1400b5010), PATCH_JUMP);
	InjectHook(_addr(0x1400ae4a0), tramp->Jump(FUN_1400ae4a0), PATCH_JUMP);
	InjectHook(_addr(0x1400ac6e0), tramp->Jump(FUN_1400ac6e0), PATCH_JUMP);
	InjectHook(_addr(0x1400aaeb0), tramp->Jump(UndefinedFunction_1400aaeb0), PATCH_JUMP);
	InjectHook(_addr(0x1400a8830), tramp->Jump(FUN_1400a8830), PATCH_JUMP);
	InjectHook(_addr(0x1400a66e0), tramp->Jump(FUN_1400a66e0), PATCH_JUMP);
	InjectHook(_addr(0x1400a1410), tramp->Jump(UndefinedFunction_1400a1410), PATCH_JUMP);
	InjectHook(_addr(0x14009ceb0), tramp->Jump(FUN_14009ceb0), PATCH_JUMP);
	InjectHook(_addr(0x140099e30), tramp->Jump(FUN_140099e30), PATCH_JUMP);
	InjectHook(_addr(0x1400edf80), tramp->Jump(FUN_1400edf80), PATCH_JUMP);
	InjectHook(_addr(0x140097740), tramp->Jump(FUN_140097740), PATCH_JUMP);
	InjectHook(_addr(0x140095b40), tramp->Jump(FUN_140095b40), PATCH_JUMP);
	InjectHook(_addr(0x140092b60), tramp->Jump(UndefinedFunction_140092b60), PATCH_JUMP);
	InjectHook(_addr(0x140090810), tramp->Jump(FUN_140090810), PATCH_JUMP);
	InjectHook(_addr(0x14008e370), tramp->Jump(FUN_14008e370), PATCH_JUMP);
	InjectHook(_addr(0x14008c3c0), tramp->Jump(FUN_14008c3c0), PATCH_JUMP);
	InjectHook(_addr(0x140089400), tramp->Jump(FUN_140089400), PATCH_JUMP);
	InjectHook(_addr(0x140081310), tramp->Jump(FUN_140081310), PATCH_JUMP);
	InjectHook(_addr(0x14007d990), tramp->Jump(FUN_14007d990), PATCH_JUMP);
	InjectHook(_addr(0x14007ad00), tramp->Jump(UndefinedFunction_14007ad00), PATCH_JUMP);
	InjectHook(_addr(0x1400ebbb0), tramp->Jump(FUN_1400ebbb0), PATCH_JUMP);
	InjectHook(_addr(0x140079eb0), tramp->Jump(FUN_140079eb0), PATCH_JUMP);
	InjectHook(_addr(0x140077670), tramp->Jump(FUN_140077670), PATCH_JUMP);
	InjectHook(_addr(0x140074470), tramp->Jump(UndefinedFunction_140074470), PATCH_JUMP);
	InjectHook(_addr(0x1400700a0), tramp->Jump(FUN_1400700a0), PATCH_JUMP);
	InjectHook(_addr(0x14006d670), tramp->Jump(FUN_14006d670), PATCH_JUMP);
	InjectHook(_addr(0x14006b7c0), tramp->Jump(FUN_14006b7c0), PATCH_JUMP);
	InjectHook(_addr(0x140069310), tramp->Jump(FUN_140069310), PATCH_JUMP);
	InjectHook(_addr(0x140066c20), tramp->Jump(FUN_140066c20), PATCH_JUMP);
	InjectHook(_addr(0x140063a90), tramp->Jump(FUN_140063a90), PATCH_JUMP);
	InjectHook(_addr(0x1400e2800), tramp->Jump(FUN_1400e2800), PATCH_JUMP);
	InjectHook(_addr(0x1400dff60), tramp->Jump(FUN_1400dff60), PATCH_JUMP);
	InjectHook(_addr(0x1400dd840), tramp->Jump(FUN_1400dd840), PATCH_JUMP);
	InjectHook(_addr(0x1400dabd0), tramp->Jump(UndefinedFunction_1400dabd0), PATCH_JUMP);
	InjectHook(_addr(0x1400d76d0), tramp->Jump(FUN_1400d76d0), PATCH_JUMP);
	*/
};
//void FUN_1402594a0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
//
//{
//	PREPHYSICS(param_1, param_2, param_3, param_4);
//	while (true) {
//		Sleep(5000);
//	}
//	longlong lVar1 = 0;
//	longlong* plVar2 = 0;
//	ulonglong uVar3 = 0;
//	ulonglong uVar4 = 0;
//	undefined uVar5 = 0;
//	undefined7 uVar6 = 0;
//	undefined4 local_res8 = 0;
//	undefined4 local_resc = 0;
//
//	uVar5 = (undefined)param_3;
//	uVar6 = (undefined7)((ulonglong)param_3 >> 8);
//	printf("l%d\n", __LINE__);
//	hook(0x140521df0, param_1);
//	printf("l%d\n", __LINE__);
//	hook(0x140258540, param_1);
//	printf("l%d\n", __LINE__);
//	hook(0x140289c30, *(longlong*)(param_1 + 0x401c0), param_2, CONCAT71(uVar6, uVar5), param_4);
//	printf("l%d\n", __LINE__);
//
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40260) + 0x30))();
//	printf("l%d\n", __LINE__);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a8) + 0x48))();
//	printf("l%d\n", __LINE__);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40198) + 0x48))();
//	printf("l%d\n", __LINE__);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401d8) + 0x48))();
//	printf("l%d\n", __LINE__);
//	hook(0x1405bb710, *(longlong*)(param_1 + 0x401e0), param_2, CONCAT71(uVar6, uVar5));
//	printf("l%d\n", __LINE__);
//	lVar1 = hookret<long long>(0x140001af0);
//	printf("l%d\n", __LINE__);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1401bcc50, lVar1);
//	printf("l%d\n", __LINE__);
//	(**(code**)(*plVar2 + 0x48))(plVar2);
//	lVar1 = hookret<long long>(0x1400047a0);
//	hook(0x14053de60, lVar1, 2, CONCAT71(uVar6, uVar5), param_4);
//	lVar1 = hookret<long long>(0x1400047a0);
//	hook(0x14020c7d0, lVar1, (undefined8*)&local_res8);
//	lVar1 = hookret<long long>(0x1401e0ca0);
//	hook(0x140932790, lVar1, local_res8);
//	lVar1 = hookret<long long>(0x1401e0ca0);
//	hook(0x140447110, lVar1, local_resc);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40270) + 0x48))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40208) + 0x48))();
//	hook(0x140537080, *(longlong*)(param_1 + 0x40190));
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40200) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	lVar1 = hookret<long long>(0x1409629d0, lVar1);
//	hook(0x14014f410, lVar1);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40230) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401c0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40210) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40228) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40218) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401c0) + 0x50))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401e8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40240) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1401bcc50, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14097d370, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140683730, lVar1);
//	(**(code**)(*plVar2 + 0x48))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140015690, lVar1);
//	(**(code**)(*plVar2 + 0x48))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401e0) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140056130, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a0) + 0x68))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401a0) + 0x58))();
//	hook(0x140647910, *(longlong*)(param_1 + 0x40240));
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401d8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40208) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401b0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401f0) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40248) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40258) + 0x30))();
//	plVar2 = (longlong*)hookret<long long*>(0x140001af0);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1407bcd80, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140259460, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140683730, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140015690, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	lVar1 = hookret<long long, long long>(0x140056130, lVar1);
//	hook(0x140011320, lVar1);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14013c430, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140259270, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1408f1f10, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14004b000, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x1407cda50, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long, long long>(0x14010a200, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401b8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401c8) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401d0) + 0x30))();
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140703370, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x14030e6c0, lVar1);
//	(**(code**)(*plVar2 + 0x30))(plVar2);
//	lVar1 = hookret<long long>(0x140001af0);
//	plVar2 = (longlong*)hookret<long long*, long long>(0x140327a10, lVar1);
//	lVar1 = *plVar2;
//	(**(code**)(lVar1 + 0x30))(plVar2);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40198) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40270) + 0x30))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401e0) + 0x48))();
//	hook(0x140259ea0, param_1);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40190) + 0x30))();
//	hook(0x14053a250, *(longlong*)(param_1 + 0x40190), lVar1, CONCAT71(uVar6, uVar5), param_4);
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40208) + 0x50))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x40270) + 0x50))();
//	(**(codenoarg**)(**(longlong**)(param_1 + 0x401f8) + 0x30))();
//	lVar1 = hookret<long long>(0x140001b00);
//	uVar3 = hookret<unsigned long long, long long, int, char>(0x1402b3d00, lVar1, 0xa4, '\x01');
//	lVar1 = hookret<long long>(0x140001b00);
//	uVar4 = hookret<unsigned long long, long long, int, char>(0x1402b3d00, lVar1, 0xa5, '\x01');
//	if (((char)uVar4 != '\0') || ((char)uVar3 != '\0'))
//	{
//		lVar1 = hookret<long long>(0x140001b00);
//		uVar3 = hookret<unsigned long long, long long, int, char>(0x1402b3dc0, lVar1, 0x73, '\x01');
//		if ((char)uVar3 != '\0')
//		{
//			lVar1 = hookret<long long>(0x140003150);
//			hook(0x1405213a0, lVar1);
//			return;
//		}
//	}
//	return;
//
//	POSTPHYSICS();
//};

void FUN_0x1400600b0(longlong* param_1) {
	chartick(param_1, 0x1400600b0, "Amaterasu");

};
void FUN_0x140063a90(longlong* param_1) {
	chartick(param_1, 0x140063a90, "unknown");

};
void FUN_0x140066c20(longlong* param_1) {
	chartick(param_1, 0x140066c20, "Captain America");

};
void FUN_0x140069310(longlong* param_1) {
	chartick(param_1, 0x140069310, "Chris");

};
void FUN_0x14006b7c0(longlong* param_1) {
	chartick(param_1, 0x14006b7c0, "Chun-Li");

};
void FUN_0x14006d670(longlong* param_1) {
	chartick(param_1, 0x14006d670, "Crimson Viper");

};
void FUN_0x1400700a0(longlong* param_1) {
	chartick(param_1, 0x1400700a0, "Dante");

};
void FUN_0x40074470(longlong* param_1) {
	chartick(param_1, 0x40074470, "unknown");

};
void FUN_0x140077670(longlong* param_1) {
	chartick(param_1, 0x140077670, "Dormammu");

};
void FUN_0x140079eb0(longlong* param_1) {
	chartick(param_1, 0x140079eb0, "Doctor Doom");

};
void FUN_0x14007ad00(longlong* param_1) {
	chartick(param_1, 0x14007ad00, "Dr Strange");

};
void FUN_0x14007d990(longlong* param_1) {
	chartick(param_1, 0x14007d990, "DrStrangeSh");

};

void FUN_0x400804d0(longlong* param_1) {
	chartick(param_1, 0x400804d0, "unknown");

};
void FUN_0x140081310(longlong* param_1) {
	chartick(param_1, 0x140081310, "FeliciaForC?");

};
void FUN_0x140089400(longlong* param_1) {
	chartick(param_1, 0x140089400, "Ghost Rider");

};
void FUN_0x14008c3c0(longlong* param_1) {
	chartick(param_1, 0x14008c3c0, "Akuma/Gouki");

};
void FUN_0x14008e370(longlong* param_1) {
	chartick(param_1, 0x14008e370, "Haggar");

};
void FUN_0x140090810(longlong* param_1) {
	chartick(param_1, 0x140090810, "Hawkeye");

};
void FUN_0x140092b60(longlong* param_1) {
	chartick(param_1, 0x140092b60, "Strider");

};
void FUN_0x140095b40(longlong* param_1) {
	chartick(param_1, 0x140095b40, "Hulk");

};
void FUN_0x140097740(longlong* param_1) {
	chartick(param_1, 0x140097740, "Iron Fist");

};
void FUN_0x140099e30(longlong* param_1) {
	chartick(param_1, 0x140099e30, "Iron Man");

};
void FUN_0x14009ceb0(longlong* param_1) {
	chartick(param_1, 0x14009ceb0, "Jill");

};
void FUN_0x1400a1410(longlong* param_1) {
	chartick(param_1, 0x1400a1410, "Hsien-Ko");

};
void FUN_0x1400a66e0(longlong* param_1) {
	chartick(param_1, 0x1400a66e0, "Magneto");

};
void FUN_0x1400a8830(longlong* param_1) {
	chartick(param_1, 0x1400a8830, "Maya");

};
void FUN_0x1400aaeb0(longlong* param_1) {
	chartick(param_1, 0x1400aaeb0, "Modok");

};
void FUN_0x1400ac6e0(longlong* param_1) {
	chartick(param_1, 0x1400ac6e0, "Morrigan");

};
void FUN_0x1400ae4a0(longlong* param_1) {
	chartick(param_1, 0x1400ae4a0, "MorriganSh");

};
void FUN_0x1400b5010(longlong* param_1) {
	chartick(param_1, 0x1400b5010, "Nemesis");

};
void FUN_0x1400b8a00(longlong* param_1) {
	chartick(param_1, 0x1400b8a00, "Nova");

};
void FUN_0x1400bbba0(longlong* param_1) {
	chartick(param_1, 0x1400bbba0, "Phoenix");

};
void FUN_0x1400be8f0(longlong* param_1) {
	chartick(param_1, 0x1400be8f0, "Firebrand");

};

void FUN_0x1400c84f0(longlong* param_1) {
	chartick(param_1, 0x1400c84f0, "Ryu");

};
void FUN_0x1400ca240(longlong* param_1) {
	chartick(param_1, 0x1400ca240, "Sentinel");

};
void FUN_0x1400cd20(longlong* param_1) {
	chartick(param_1, 0x1400cd20, "unknown");

};
void FUN_0x1400cdc90(longlong* param_1) {
	chartick(param_1, 0x1400cdc90, "Shuma Gorath");

};
void FUN_0x1400d4b30(longlong* param_1) {
	chartick(param_1, 0x1400d4b30, "Spider-Man");

};
void FUN_0x1400d76d0(longlong* param_1) {
	chartick(param_1, 0x1400d76d0, "Storm");

};
void FUN_0x1400dabd0(longlong* param_1) {
	chartick(param_1, 0x1400dabd0, "Super Skrull");

};

void FUN_0x1400dd840(longlong* param_1) {
	chartick(param_1, 0x1400dd840, "Taskmaster");

};
void FUN_0x1400dff60(longlong* param_1) {
	chartick(param_1, 0x1400dff60, "Thor");

};
void FUN_0x1400e2800(longlong* param_1) {
	chartick(param_1, 0x1400e2800, "unknown");

};
void FUN_0x1400ebbb0(longlong* param_1) {
	chartick(param_1, 0x1400ebbb0, "Viewtiful Joe");

};
void FUN_0x1400edf80(longlong* param_1) {
	chartick(param_1, 0x1400edf80, "Wesker");

};
void FUN_0x1400f0d70(longlong* param_1) {
	chartick(param_1, 0x1400f0d70, "Wolverine");

};
void FUN_0x1400f2eb0(longlong* param_1) {
	chartick(param_1, 0x1400f2eb0, "X-23");

};
void FUN_0x1400f6850(longlong* param_1) {
	chartick(param_1, 0x1400f6850, "Zero");

};

void hookCtrs(Trampoline* tramp) {
	InjectHook(_addr(0x140458908), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1404588c3), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14045887e), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140450d71), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14035bf30), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14033160c), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140327877), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140327845), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14032696c), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402f9a24), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c9f19), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c84f9), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c84c7), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c83fc), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c83ca), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c82fc), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c82ca), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c8209), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c81d7), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c8119), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c80e7), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c8029), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c7ff7), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c4909), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402c47dd), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402bb161), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402bb12f), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402bb0fd), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402baf24), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402baba9), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402ba9f0), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402ba68a), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1402b19d0), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14029a4fe), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140285597), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140285565), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140285533), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140285501), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a9eb), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a9ba), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a877), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a846), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a815), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a7e4), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a7b3), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a782), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a20b), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a1da), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14027a1a9), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14022207e), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140220b18), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14021f2e6), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14021cd97), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401f2bf2), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401f2bc0), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401eb6ae), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401eb67c), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401db411), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401cba7d), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401cba4b), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401cba19), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14014df10), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14014dede), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14014deac), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14014de7a), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14014de48), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140145a54), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1401459c1), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013f3eb), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013f3b9), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013f28f), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013f25d), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013f194), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013f162), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013efb0), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ef7e), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ed6d), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ed3b), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ec38), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ec06), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013eab4), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ea7e), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013ea0f), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013e9dd), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013e91b), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013e8e9), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013c2f4), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14013c2c2), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1400b9e5f), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1400b9e2d), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140051353), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140051320), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1400512ed), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x1400512ba), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140051287), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140051254), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x140051221), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14001d317), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14001c775), tramp->Jump(FUN_14001c210), PATCH_CALL);
	InjectHook(_addr(0x14001c743), tramp->Jump(FUN_14001c210), PATCH_CALL);
	//
	InjectHook(_addr(0x140a4e3db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e38b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e33b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e2eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e29b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e24b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e1fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e1ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e15b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e10b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e0bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e06b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4e01b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dfcb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4df7b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4df2b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dedb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4de8b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4de3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ddeb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dd9b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dd4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dcfb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dcab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dc5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dc0b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dbbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4db6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4db1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4dacb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4da6f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4da1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d9cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d97b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d92b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d8dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d87f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d82b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d7dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d78d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d73d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d6ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d69b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d64d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d5fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d5ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d54f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d4fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d4ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d45b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d40b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d3bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d36d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d31d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d2cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d26f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d21d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d1c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d0a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4d041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cfe1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cf81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cf21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cecd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cc9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cc4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cbfb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cbad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cb5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cb0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4cabd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ca6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ca1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c9cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c97b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c92d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c8dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c88d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c83d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c7ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c79d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c74d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c6fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c6ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c65d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c5ff), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c5ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c55b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c50b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c4bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c46d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c41b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c3cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c37b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c32b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c2db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c28b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c23b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c1ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c19b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c14b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c0fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c0ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c05b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4c00d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bfbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bf6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bf1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4becd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4be6f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4be11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bdaf), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bd51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bcfb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bcab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bc51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bbfb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bbad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bb5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4bb0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4babb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ba6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ba1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b9cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b97b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b92b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b8db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b88b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b83b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b7eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b79b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b74b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b6fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b6ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b65d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b60d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b5bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b56d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b4bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b37d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b321), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b2cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b27b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b1cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b11b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b0c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b06d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4b01d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4afcd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4af7d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4af2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4aedd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ae8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ae3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4aded), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ad9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ad4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4acfd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4acab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ac5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ac0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4abbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ab6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4ab1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4aacd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4aa7d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4aa2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a9dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a97d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a92b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a8db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a88b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a83d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a7eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a79d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a74b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a6fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a6ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a65d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a60b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a5bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a56b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a51b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a4cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a47b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a42b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a3db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a38d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a33b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a2eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a29b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a24d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a1fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a1ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a15b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a10b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a0bb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a06d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4a01b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49fcb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49f7b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49f2b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49edb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49e8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49e3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49deb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49d9b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49d4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49cfd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49cab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49c5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49c0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49bbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49b6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49b1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49acb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a49a6f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4992d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a497ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a496ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4956d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4942d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a492ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a491ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4906d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a48f2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a48ded), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a48cad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a48b6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a48a2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a488ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a487ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4866d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4861d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a485cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4857d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4852d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a483ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4839d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4825d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4820d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a481bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4816d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4802d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a47ee1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a47d9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a47d4d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a47c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a47abd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a475bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4747d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4742d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a473dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a47381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4723d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a470fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a470ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4705b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4700d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46fbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46f6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46f1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46ecb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46e7b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46e2b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46ddb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46d8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46d3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46ceb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46c9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46c4d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46bfd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46bad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46b5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46b0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46abd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46a6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46a1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a469cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4697d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4692d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a468dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4688d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4683d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a467ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4679d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4674b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a466fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a466ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4665d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a465ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4655b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4650b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a464af), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4645d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4640d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a463bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a46361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a462ff), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4629f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4623f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a461df), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4617f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4603d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45fed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45f9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45f4d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45efd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45ead), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45e5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45e0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45dbd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45d6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45d1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45ccb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45c7b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45c2b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45bdb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45b8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45b3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a45adb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a459ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4599d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4594d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a458fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a458ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4576d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4571b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a456cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4567d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4562b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a455dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4558d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4553b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a454eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4549b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4541b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a453cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4537b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4523d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a450fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a450ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44ecd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44e7b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44ddd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44d8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44d3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44ceb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44c9b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44c4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44bfb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44bad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44b4f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44afb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44a9b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a44a4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a449fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a449ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4494f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a448fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a448ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4485d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4480d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a447bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4476d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4471d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a446cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4467d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4462b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a445dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4458b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4453d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a444ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4449d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4444d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a443fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a443ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4435d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4421d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a441cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4417d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4412d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a440dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4408d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4403d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43feb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43f9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43f4d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43efd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43ead), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43dfd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43dab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43d5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43d0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43cbd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43c6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43c1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43bcd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43b1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43acd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43a7d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a43a2b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a439db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4398b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4393d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a438ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a437ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4366d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4361d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a435cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4357b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4352d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a434cf), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4347b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4342d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a433db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4338b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4333b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a432ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4329d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4324d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a431fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a431ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4315b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4310d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a430bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4306d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4301b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42fcd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42f7d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42f2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42ed1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42e7d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42e2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42ddd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42d8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42d3d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42ced), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42c91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42c3d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42bed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42b9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42b4d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42afb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42aad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42a5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a42a0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a429bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4296d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4291d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a428c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4286d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4281d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a427cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4277d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4272d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a426dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4268d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4263d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a425ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4259d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4245d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4240b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a422cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4227b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4213d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a420eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4209b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4204b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41ffb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41fab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41e6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41d2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41bed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41aad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41a5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41a0b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a418cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4187b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4182b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a417dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4178d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4173d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a416ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4169b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4164b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a415ef), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a414ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4145d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4140d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a413bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a41361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4130d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a412bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4126d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4121d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a411cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4117d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4111f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a410cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4107d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4102b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40fdb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40f8b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40f3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40eeb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40e9b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40e4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40dfb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40dab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40d5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40d0b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40cbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40c6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40c1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40bcb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40b7b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40b2b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40adb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40a8b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40a3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a409eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4099d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a408fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a408ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4085d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4080b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a407bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4076d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a406bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4066b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4061d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a405cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4057d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40521), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a404cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4041d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a403cd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4037d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4032b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a402cf), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4027b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4022d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a401db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a40181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4012d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a400dd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4008d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a4003d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ffed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ff9d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ff4b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fefb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fea1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fe4d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fdf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fd9b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fc5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fc0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fbbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fb6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3fb1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f6fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f6ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f65d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f60d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f5bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f54d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f4fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f4ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f45b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f40b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f3bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f36b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f31b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f2cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f27b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f22b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f1db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f18d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f13d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f0eb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f09b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3f04d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3effb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3efad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ef5b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ef0d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3eebb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ee6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ee0f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3edbd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ed6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ed1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ecc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ec6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ec1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ebc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3eb6d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3eb1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3eac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ea6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3ea1d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e9cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e88d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e7fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e79d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e74d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e6fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e69f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e64d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e5bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e55b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e50d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e4bd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e46d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e41d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e3cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e37b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e32d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e2db), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e28d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e23b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e1ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e19d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e14d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e0fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e09f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3e04b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dfef), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3df8f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3df0b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dd5d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dd0b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dcbb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dc6b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dc1b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dbcb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3db7d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3db2d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3dadd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3da8d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3da3b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d9ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d8ed), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d89d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d84d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d7fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d7ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d75d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d64d), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d5fd), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d5ab), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d54b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d4fb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d4ad), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d45b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d40b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d3bb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d36b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d30f), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d2af), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d1cb), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140a3d16b), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14045c5e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14045a2a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14045a261), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404591e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404591a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140458ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140458511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140457f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140457c51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140457c11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140457a21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140457411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140457281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140456f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140456df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140455bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140455b91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140455b51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140454221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404541e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140453ca1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404535a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140452fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140452d91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140451521), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140450e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140450e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140450bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404509f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404507e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044fa81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044eca1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044ec61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044e4c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044deb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044d881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044cf11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044c8a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14044c341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140448bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140448bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140447e61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140447bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404472b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404465f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140444ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140444571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140443021), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140442471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140441501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14043f941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14043cb21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14043b291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14043a811), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140437c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140436231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14042f3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14042d7f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140429961), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140428f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404233e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140422e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140416641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140416601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140415be1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140415191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140414371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140413b21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1404134a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140412621), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140411341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14040b2b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140400c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403fddf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403fc411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403fadb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403faa81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403fa711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f9ed1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f8b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f7b11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f3b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f2b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f2ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403f1c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403ec041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403eb5f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403e7ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403e6f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403e6261), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d5cd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d5821), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d16c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d15c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d14c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d13c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d12c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d11c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d10c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d1001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403d0a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a99b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a98f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a98b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a97f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a97b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a96f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a96b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a95f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a95b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a94f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a94b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a93f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a93b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a92f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a92b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a91f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a91b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a90f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a90b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a9031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a89f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a89b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a88f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a88b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a87f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a87b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a86f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a86b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a85f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a85b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a84f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a84b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a83f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a83b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a82f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a82b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a81f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a81b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a80f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a80b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a8031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a79f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a79b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a78f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a78b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a77f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a77b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a76f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a76b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a75f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a75b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a74f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a74b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a73f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a73b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a72f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a72b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a71f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a71b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a70f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a70b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a7031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a69f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a69b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a68f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a68b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a67f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a67b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a66f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a66b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a65f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a65b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a64f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a64b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a63f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a63b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a62f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a62b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a61f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a61b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a60f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a60b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a6031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a59f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a59b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a58f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a58b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a57f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a57b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a56f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a56b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a55f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a55b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a54f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a54b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a53f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a53b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a52f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a52b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a51f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a51b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a50f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a50b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a5031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a49f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a49b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a48f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a48b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a47f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a47b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a46f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a46b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a45f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a45b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a44f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a44b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a43f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a43b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a42f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a42b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a41f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a41b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a40f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a40b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a4031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a39f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a39b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a38f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a38b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a37f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a37b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a36f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a36b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a35f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a35b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a34f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a34b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a33f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a33b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a32f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a32b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a3231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a31f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a2061), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403a1e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dfc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039df81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039df41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039df01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039de81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039de41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039de01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039ddc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dd81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dd41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dd01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dcc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dc81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dc41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dc01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dbc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039db81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039db41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039db01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039dac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039da81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039da41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039da01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d9c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d8c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d7c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d6c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d5c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d4c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d3c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039d301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14039bc11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403862c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403861c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403860c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140386001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403859c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403858c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403857c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403856c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403855c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403854c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403853c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403852c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403851c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403850c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140385001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403849c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403848c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403847c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403846c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403845c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403844c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403843c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403842c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403841c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403840c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140384001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403839c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403838c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403837c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403836c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403835c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403834c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403833c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403832c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403831c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403830c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140383001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403829c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140382981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140381291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14037b311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140379ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140375aa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403745e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140373db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403732c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403728a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140372861), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140371b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14036ec11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14036c5c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14036a5c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403608d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035fff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035f711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035f471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035e811), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035db91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035c891), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035aaa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14035aa61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403499f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403499b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403498f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403498b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403497f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403497b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403496f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403496b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403495f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403495b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403494f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403494b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403493f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403493b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403492f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403492b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403491f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403491b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403490f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403490b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140349031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403489f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403489b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403488f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403488b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403487f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403487b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403486f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403486b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403485f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403485b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403484f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403484b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403483f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403483b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403482f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403482b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403481f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403481b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403480f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403480b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140348031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403479f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403479b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403478f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403478b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403477f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403477b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403476f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403476b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403475f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403475b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403474f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403474b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403473f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403473b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403472f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403472b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403471f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403471b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403470f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403470b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140347031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403469f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403469b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403468f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403468b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403466b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140346531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403455c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140345291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403429f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403429b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403428f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403428b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403427f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403427b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403426f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403426b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140342631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403425f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341fa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341f61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341f21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341ee1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341ea1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403414b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140341431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403413f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403413b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140340f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140340df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033ff81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033fb51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033f9e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033f391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033f351), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033f311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033f2d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033f291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e691), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e651), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e5d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033e111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033df91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033de11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033dc91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033d961), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14033d921), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339b11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339ad1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339a91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339a51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339a11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403399d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339991), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339951), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403398d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339891), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339851), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339811), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403397d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339791), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339751), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403396d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339691), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339651), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403395d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339551), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403394d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339491), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339451), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403393d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339351), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403392d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339251), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339211), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403391d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339151), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403390d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339091), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339051), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140339011), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338fd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338f51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338f11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338ed1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338e91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140338e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140335031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403349f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403349b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403348f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403348b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403347f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403347b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403346f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403346b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334631), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403345f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403345b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403344f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403344b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403343f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403343b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334371), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403341f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140334071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140333ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140333751), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140333341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140333151), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403327d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140330ce1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140330ca1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14032e531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14032df61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14032d3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14032ce61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14032b341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14032a1b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140329221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140327071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403261b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140326171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140326131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403260f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140324ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140324eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140324471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140323ef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140323eb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140323c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403232f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140321271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140321001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140320431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14031f911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14031d3b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14031cba1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14031c0b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14031a781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140319541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140315481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140315441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140314cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403148c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140314881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140312231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140311c61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140311671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1403104c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030fba1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030f031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030e311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030e2d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030c201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030afe1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14030a021), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140308b21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140305a51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140300211), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ffe31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402fedd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402fd4d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402fa591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402fa1e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402fa1a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402f9311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402f92d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402f4501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402f23d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402f0a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402f0691), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ef981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ee491), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ee451), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ee411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ede01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ed6f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402e5191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402e4a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402e4381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402e3e91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402e37e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402df1f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402de5f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402dcf31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402db4b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d8fd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d67b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d6771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d6731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d66f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d66b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d3441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d31d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d20f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402d1191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402cf611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ca1f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ca1b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402ca171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c9da1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c7301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c72c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c7281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c7241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c7201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c71c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c7181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c7141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c2f61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c1c61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402c16d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b79b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b6ae1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b6181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b5761), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b5561), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b5451), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b52c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b50b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b4761), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b4721), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b46e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b46a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b4461), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b2d91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b2bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b2ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b27a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b2611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b1e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b1831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402b1711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402a8ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402a8531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029fe51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029f1d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029f191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029f151), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029f111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029ed81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029e411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029e3d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029e391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029d7d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029d791), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029d291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029ca81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029ca41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029ca01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029c5a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029c2f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029beb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029ba41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029b621), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029b1a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14029adf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140299c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140299c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140299bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140299191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140298ea1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402988a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140298441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140298181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140297d91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402979d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140297551), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140297511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140296e91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140296e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140296ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402964a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140296461), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140296131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140295bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140295551), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140295171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140294f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14028c651), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14028c611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14028c5d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14028c591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402874a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287461), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402873e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402873a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287321), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402872e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402872a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287261), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402871e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402871a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140287121), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402851a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140280191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140280151), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140278cd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140275bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140275a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402725c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140272581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140271e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140271e11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140271dd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140270c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140270c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140270bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140270bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402688c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402687c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402686c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402685c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402684c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402683c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140268381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140265281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140261c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025de91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025de51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025de11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025ddd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025d8b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025ba51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025ba11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b9d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b991), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b751), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b4b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b1a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14025b161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140259f31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402573f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14024ec71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14024ae71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14024ae31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14024adf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14024adb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14024ad71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140228911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140224051), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402214b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021f861), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021f061), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021cbb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021c5f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021b241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021af71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021ac11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021a941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021a671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021a3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14021a0d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140219e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140219b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140219701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140219431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140219161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140218e91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140218bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402188f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140218611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140218331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140218051), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140217d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140217401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402164b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140216061), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140215c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140214ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140212d11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402127f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140211b51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020e571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020e211), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020df21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020d7d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020d491), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020cc11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020c531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020bf11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020b771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14020a111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140208121), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402080e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1402080a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140207cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140202b11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ff531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ff131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fef31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401febb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401feb71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fe611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fe3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fdd21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fdce1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fd4c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fd481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fd151), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fcf91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fc9a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fa7f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401fa7b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f8e31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f86b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f8671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f7f51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f7d11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f6ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f6fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f6851), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f6811), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f6401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f58d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f5891), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f56d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f25d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f15c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f1421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401f00f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ef811), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ef7d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee4a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee461), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee3e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee321), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee2e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee2a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee261), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ee221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ed711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ed6d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ed691), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ed331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ed1c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401eaf21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e9c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e9901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e9611), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e9311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e8bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e87a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e8071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e7261), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e7221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e6ee1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e69e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e6721), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e64f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e5f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e5b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e4fd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e4f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e4141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e4101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e3591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e3551), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e3271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e2951), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e23e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401e1441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401df881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401df561), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401df1d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401defa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401de751), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401de321), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ddf41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ddca1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dc421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dc3e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dc3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dc361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dc031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dbd51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401db6f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401db221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401daf71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dad61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401dab61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401da661), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401da1b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d9d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d9b11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d9601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d9081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d8dd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d8421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d80d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d7801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d7391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d6e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d6901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d6521), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d6361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d57e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d53e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d4a91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d4a51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d4471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d4291), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d4071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d3ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d38c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d2871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d2831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d0fb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d0ca1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d07d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d0501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401d0141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401cfc41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ce861), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ce741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c5a91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c5511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c5171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c47a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c4471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c4161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c3d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c39a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c2081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c1331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c0c11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c0a91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401c01b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bf6a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bee81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bde31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bd451), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bc0c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bbdd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bba31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401bae81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b9f51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b95f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b8ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b8771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b7d91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b6d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b6881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b6541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b6241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b5e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b5a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b5591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b52d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b4f11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b4be1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b4a61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b47b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b4391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b40c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b3df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b3ad1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b3771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b3271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b2b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b2491), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b1b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b1391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b05d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401b0431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401afa61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401aea51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ae771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401adca1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401aca01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ac141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401abb51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401ab341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401aae31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401aa901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a9f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a9bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a9871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a95a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a90c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a8911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a76c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a6f21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a6a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a64f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a6021), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a5d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a5a71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a5221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a4f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a4cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a4b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a44d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a4131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a3e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a3a61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a34e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a3091), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a2c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a2981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a2121), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a1c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a17c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a13c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a0da1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a0731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401a02f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019ff21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019f681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019f141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019ee71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019e561), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019e131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019de31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019d681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019d2b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019cdb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019cc31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019c8e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019c001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019be51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019b521), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019a9c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019a6b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14019a161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140199421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140199111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140198f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140198a91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140198741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401981f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140197ee1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140197bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140197901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140196fd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401969a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140195e91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401959a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401951c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140194f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140194851), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140193941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401935c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140192e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140192a51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401922e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140191bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140191911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140191531), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140191231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140190a31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140190581), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401901c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018fe31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018f601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018eaa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018e511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018c821), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018c4a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018c131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018ac41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018a971), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018a5e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14018a311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140189f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140189aa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140189301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140188891), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140188221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140187af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140187641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140187241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140186d51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140186881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140186331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140185c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140185931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140185221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140184dd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140184a91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140184401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140183741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140182f21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140182c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140182911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140182021), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140181a21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140181571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140181211), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140180e91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140180881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140180521), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401800e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017fa41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017efd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017ec51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017e481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017e171), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017dea1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017da11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017d1f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017cf11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017cc41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017c931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017c5c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017c191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017ba61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017b281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14017a031), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140179111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401782d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140177db1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401773d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140176e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140176ab1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140176251), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140175ea1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140175aa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140175711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140174b31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140174741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140174401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140172d91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140172ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140172431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401722a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140171b11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401712a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140170f91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140170c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140170481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140170141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016ffc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016f911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016ebd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016e5f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016dc21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016d5d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016d311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016cef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016c691), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016c3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016bfb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016bc11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016b811), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016b3e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016aef1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016aa31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14016a251), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140169da1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401698c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140169161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140168de1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140168411), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140167ff1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140167c51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140167981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401674d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401670e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140166bd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140166781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140166041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140165d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140165831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140164d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140164851), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140164551), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140163e61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401634f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140162e71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140162b61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140162751), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140162221), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140161f11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140161a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140161701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401609a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140160481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140160181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015fe51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015fb21), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015efc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015ecf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015ea11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015e3d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015e011), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015dd41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015da61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015d011), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015cc71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015c901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015c461), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015ba71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015b711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015ac01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015a761), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14015a3a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140159731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140158c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140158841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140157fe1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140157891), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140157051), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140156c61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401562d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140155fd1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140155c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140155851), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140155471), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401551f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140154ad1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140154691), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401541d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140153ed1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140153ad1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140153591), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401531b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401528c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140152111), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140151841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140150781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140150741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14014f571), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14014d6a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14014d2e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401492c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149241), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149201), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401491c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401490c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149081), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140149001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148fc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148f81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148f01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148e81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148e41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148e01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148d81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148d41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148c81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148c01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148bc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148b41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148b01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148a01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401489c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148941), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148901), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401488c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148881), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148841), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401487c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148781), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148741), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148701), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401486c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148681), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140148601), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140145381), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401420f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d8f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d8b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d871), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d831), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d7f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d7b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d731), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d6f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d6b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d671), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013d2f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14013b311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140139d11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140139b51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140139981), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140139801), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401395d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401391a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140139021), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140138c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140138621), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401384a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136d71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136d31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136cf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136c71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136c31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136bf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136bb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136b71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136951), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140136301), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140135761), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140135391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140135051), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140134dc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401349b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401347d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140134621), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140134271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140134001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140133e11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140133961), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140133771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401335f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140133361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140132b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401325a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1401322a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140132181), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140130281), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140120041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140120001), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14010cc51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14010b311), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14010b2d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140109041), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400fa8a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400f8271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400f3441), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400f1431), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400ef021), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400ebfe1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400e9d91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400e5d01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400e34e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400e0a41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400de271), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400dbcf1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400d86e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400d5231), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400d2641), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400ce2a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400cd5f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400cb421), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400c8be1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400c5de1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400c0df1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400bf771), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400bc9a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400b96e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400b5931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400b3071), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400aef71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400acde1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400ac1b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400a8f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400a6fa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400a4161), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400a2511), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14009fc91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14009d761), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14009afa1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140098191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140095de1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140093ae1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140091131), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14008e7c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14008c7c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14008a2b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140087ad1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140084d61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400815e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140081141), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140080101), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14007de41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14007c251), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14007a401), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140077f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140075341), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140071f41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14006dce1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14006bd01), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140069c41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400673f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140064e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140061391), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005fb71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005cb71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005cb31), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005c7d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005bdb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005b8e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005b481), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005b121), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005af71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005abb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005a9e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14005a861), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140058711), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140036ae1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400352b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400350c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140033501), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140032cc1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400323e1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400311c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140030f71), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140030b81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140030191), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14002ee61), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14002d6f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14002c331), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14002ad11), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400291a1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140028e51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140025361), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140023911), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400238d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14001fec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14001f3c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14001d931), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14001d8f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14001cfe1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14001c2d1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400173b1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400169f1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140014af1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x1400138c1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140012ec1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140011f51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140010ac1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140010a81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140010541), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14000dc91), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14000dc51), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14000bc81), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x14000bc41), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140002cb1), tramp->Jump(FUN_14045d860), PATCH_CALL);
	InjectHook(_addr(0x140001071), tramp->Jump(FUN_14045d860), PATCH_CALL);

}

void attachHooks(Trampoline* tramp, bool phys) {
	InjectHook(_addr(0x1400600bd), tramp->Jump(FUN_0x1400600b0), PATCH_CALL);
	InjectHook(_addr(0x140063a99), tramp->Jump(FUN_0x140063a90), PATCH_CALL);
	InjectHook(_addr(0x140066d35), tramp->Jump(FUN_0x140066c20), PATCH_CALL);
	InjectHook(_addr(0x140069319), tramp->Jump(FUN_0x140069310), PATCH_CALL);
	InjectHook(_addr(0x14006b7c9), tramp->Jump(FUN_0x14006b7c0), PATCH_CALL);
	InjectHook(_addr(0x14006d679), tramp->Jump(FUN_0x14006d670), PATCH_CALL);
	InjectHook(_addr(0x1400700ad), tramp->Jump(FUN_0x1400700a0), PATCH_CALL);
	InjectHook(_addr(0x14007447a), tramp->Jump(FUN_0x40074470), PATCH_CALL);
	InjectHook(_addr(0x140077701), tramp->Jump(FUN_0x140077670), PATCH_CALL);
	InjectHook(_addr(0x140079ee6), tramp->Jump(FUN_0x140079eb0), PATCH_CALL);
	InjectHook(_addr(0x14007ad0d), tramp->Jump(FUN_0x14007ad00), PATCH_CALL);
	InjectHook(_addr(0x14007da0c), tramp->Jump(FUN_0x14007d990), PATCH_CALL);
	InjectHook(_addr(0x14007da6c), tramp->Jump(FUN_0x14007d990), PATCH_CALL);
	InjectHook(_addr(0x1400804e4), tramp->Jump(FUN_0x400804d0), PATCH_CALL);
	InjectHook(_addr(0x14008131d), tramp->Jump(FUN_0x140081310), PATCH_CALL);
	InjectHook(_addr(0x140089417), tramp->Jump(FUN_0x140089400), PATCH_CALL);
	InjectHook(_addr(0x14008c3c9), tramp->Jump(FUN_0x14008c3c0), PATCH_CALL);
	InjectHook(_addr(0x14008e379), tramp->Jump(FUN_0x14008e370), PATCH_CALL);
	InjectHook(_addr(0x140090819), tramp->Jump(FUN_0x140090810), PATCH_CALL);
	InjectHook(_addr(0x140092b69), tramp->Jump(FUN_0x140092b60), PATCH_CALL);
	InjectHook(_addr(0x140095b49), tramp->Jump(FUN_0x140095b40), PATCH_CALL);
	InjectHook(_addr(0x14009774d), tramp->Jump(FUN_0x140097740), PATCH_CALL);
	InjectHook(_addr(0x140099e4a), tramp->Jump(FUN_0x140099e30), PATCH_CALL);
	InjectHook(_addr(0x14009cebe), tramp->Jump(FUN_0x14009ceb0), PATCH_CALL);
	InjectHook(_addr(0x1400a1447), tramp->Jump(FUN_0x1400a1410), PATCH_CALL);
	InjectHook(_addr(0x1400a66e9), tramp->Jump(FUN_0x1400a66e0), PATCH_CALL);
	InjectHook(_addr(0x1400a8839), tramp->Jump(FUN_0x1400a8830), PATCH_CALL);
	InjectHook(_addr(0x1400aaf78), tramp->Jump(FUN_0x1400aaeb0), PATCH_CALL);
	InjectHook(_addr(0x1400ac722), tramp->Jump(FUN_0x1400ac6e0), PATCH_CALL);
	InjectHook(_addr(0x1400ae7c7), tramp->Jump(FUN_0x1400ae4a0), PATCH_CALL);
	InjectHook(_addr(0x1400b5019), tramp->Jump(FUN_0x1400b5010), PATCH_CALL);
	InjectHook(_addr(0x1400b8a0c), tramp->Jump(FUN_0x1400b8a00), PATCH_CALL);
	InjectHook(_addr(0x1400bbc15), tramp->Jump(FUN_0x1400bbba0), PATCH_CALL);
	InjectHook(_addr(0x1400be900), tramp->Jump(FUN_0x1400be8f0), PATCH_CALL);
	InjectHook(_addr(0x1400c4c27), tramp->Jump(FUN_0x1400be8f0), PATCH_CALL);
	InjectHook(_addr(0x1400c84fc), tramp->Jump(FUN_0x1400c84f0), PATCH_CALL);
	InjectHook(_addr(0x1400ca24d), tramp->Jump(FUN_0x1400ca240), PATCH_CALL);
	InjectHook(_addr(0x1400cd23a), tramp->Jump(FUN_0x1400cd20), PATCH_CALL);
	InjectHook(_addr(0x1400cdcea), tramp->Jump(FUN_0x1400cdc90), PATCH_CALL);
	InjectHook(_addr(0x1400d1a09), tramp->Jump(FUN_0x1400d4b30), PATCH_CALL);
	InjectHook(_addr(0x1400d4b5c), tramp->Jump(FUN_0x1400d76d0), PATCH_CALL);
	InjectHook(_addr(0x1400d76de), tramp->Jump(FUN_0x1400dabd0), PATCH_CALL);
	InjectHook(_addr(0x1400dabdc), tramp->Jump(FUN_0x1400dabd0), PATCH_CALL);
	InjectHook(_addr(0x1400dd849), tramp->Jump(FUN_0x1400dd840), PATCH_CALL);
	InjectHook(_addr(0x1400dff70), tramp->Jump(FUN_0x1400dff60), PATCH_CALL);
	InjectHook(_addr(0x1400e28c9), tramp->Jump(FUN_0x1400e2800), PATCH_CALL);
	InjectHook(_addr(0x1400ebbda), tramp->Jump(FUN_0x1400ebbb0), PATCH_CALL);
	InjectHook(_addr(0x1400edf89), tramp->Jump(FUN_0x1400edf80), PATCH_CALL);
	InjectHook(_addr(0x1400f0d7d), tramp->Jump(FUN_0x1400f0d70), PATCH_CALL);
	InjectHook(_addr(0x1400f2f06), tramp->Jump(FUN_0x1400f2eb0), PATCH_CALL);
	InjectHook(_addr(0x1400f6861), tramp->Jump(FUN_0x1400f6850), PATCH_CALL);
	InjectHook(_addr(0x140289c5a), tramp->Jump(FUN_1402b41b0), PATCH_CALL);
	if (phys) {
		//InjectHook(_addr(0x14001af4f), tramp->Jump(FUN_1400199c0), PATCH_CALL);
		//InjectHook(_addr(0x1405b6c99), tramp->Jump(FUN_1405ab9a0), PATCH_CALL);
		InjectHook(_addr(0x1402594a9), tramp->Jump(FUN_140521df0), PATCH_CALL);
	}
};
