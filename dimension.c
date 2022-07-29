#include <stdlib.h>
#include <ft_dimension.h>
#include <stdio.h>

int	main(void)
{
	t_d_zero	*d_0;
	t_d_one		*d_1;
	t_d_two		*d_2;
	t_d_three	*d_3;
	t_d_four	*d_4;
	t_d_axis	a_1;
	t_d_axis	a_2;
	t_d_axis	a_3;
	t_d_axis	a_4;

	t_d_option c_option;

	d_1 = NULL;
	d_2 = NULL;
	d_3 = NULL;
	d_4 = NULL;

	ft_memset(&c_option,0,sizeof(t_d_option));
	c_option.s_bit.p_1 =1;
	c_option.s_bit.p_2 =1;
	c_option.s_bit.p_3 =1;
	c_option.s_bit.p_4 =1;

	a_1 = ft_axis_init(c_option.option, 1);
	a_2 = ft_axis_init(c_option.option, 2);
	a_3 = ft_axis_init(c_option.option, 3);
	a_4 = ft_axis_init(c_option.option, 4);

	char	*data;
	char	*data_type;
	int i;
	int k;
	int	n;

	data = "data";
	data_type = "world";

	i = 0;
	k = 0;
	n = 0;

	int m = 0;
	while (m++ < 4)
	{
		d_3 = NULL;
		n = 0;
		while (n++ < 5)
		{
			k = 0;
			d_2 = NULL;
			while (k++ < 10)
			{
				d_1 = NULL;
				i = 0;
				while (i++ < 5)
					d_1 = ft_d_one_connect_zero(d_1, ft_d_zero_new(data, data_type), a_1.order[0]);
				d_1 = d_1->head1;
				while (printf("%d\t",d_1->coordinate_1) && d_1->connect1_p)
					d_1 = d_1->connect1_p;
				printf("\n");
				d_2 = ft_d_two_connect_axis2_one(d_2, d_1->head1, a_2, a_1);
				d_2 = ft_d_two_head(d_2, a_2.order[1]);
			}
			d_2 = ft_d_two_head(d_2, a_2.order[0]);

			d_3 = ft_d_three_connect_axis3_two(d_3, d_2, a_3, a_2);
			d_3 = ft_d_three_head(d_3, a_3.order[1]);
			d_3 = ft_d_three_head(d_3, a_3.order[2]);
		}
		d_3 = ft_d_three_head(d_3, a_3.order[0]);
		d_4 = ft_d_four_connect_axis4_three(d_4, d_3, a_4, a_3);
		d_4 = ft_d_four_head(d_4, a_4.order[1]);
		d_4 = ft_d_four_head(d_4, a_4.order[2]);
		d_4 = ft_d_four_head(d_4, a_4.order[3]);
	}
	/*
	while (n++ < 5)
	{
		k = 0;
		d_2 = NULL;
		while (k++ < 10)
		{
			d_1 = NULL;
			i = 0;
			while (i++ < 5)
				d_1 = ft_d_one_connect_zero(d_1, ft_d_zero_new(data, data_type), a_1.order[0]);
			d_1 = d_1->head1;
			while (printf("%d\t",d_1->coordinate_1) && d_1->connect1_p)
				d_1 = d_1->connect1_p;
			printf("\n");
			d_2 = ft_d_two_connect_axis2_one(d_2, d_1->head1, a_2, a_1);
			d_2 = ft_d_two_head(d_2, a_2.order[1]);
		}
		d_2 = ft_d_two_head(d_2, a_2.order[0]);

		d_3 = ft_d_three_connect_axis2_two(d_3, d_2, a_3, a_2);
		d_3 = ft_d_three_head(d_3, a_3.order[1]);
		d_3 = ft_d_three_head(d_3, a_3.order[2]);
	}
	*/
	printf("2 차원\n");
	while (d_2)
	{
		while (d_2)
		{
			if (printf("[%d][%d]\t",d_2->coordinate_1, d_2->coordinate_2) && d_2->connect1_p)
				d_2 = d_2->connect1_p;
			else
				break;
		}
		printf("\n");
		d_2 = d_2->head1;
		d_2 = d_2->connect2_p;
	}
	printf("3 차원\n");
	d_3 = ft_d_three_head(d_3, a_3.order[0]);
	d_3 = ft_d_three_head(d_3, a_3.order[1]);
	d_3 = ft_d_three_head(d_3, a_3.order[2]);
	while (d_3)
	{
		while (d_3)
		{
			while (d_3)
			{
				// if (!d_3->connect1_p)
				// 	printf("1_p null : [%d][%d][%d]\n",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				// if (!d_3->connect1_m)
				// 	printf("1_m null : [%d][%d][%d]\n",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				// if (!d_3->connect2_p)
				// 	printf("2_p null : [%d][%d][%d]\n",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				// if (!d_3->connect2_m)
				// 	printf("2_m null : [%d][%d][%d]\n",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				// if (!d_3->connect3_p)
				// 	printf("3_p null : [%d][%d][%d]\n",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				// if (!d_3->connect3_m)
				// 	printf("3_m null : [%d][%d][%d]\n",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				printf("[%d][%d][%d]\t",d_3->coordinate_1, d_3->coordinate_2, d_3->coordinate_3);
				if (d_3->connect1_p)
				{
					d_3 = d_3->connect1_p;
				}
				else
					break;
			}
			d_3 = d_3->head1;
			printf("\n");
			if (d_3->connect2_p)
				d_3 = d_3->connect2_p;
			else
				break;
		}
		d_3 = d_3->head2;
		d_3 = d_3->connect3_p;
		printf("\n");
	}

	printf("4 차원\n");
	d_4 = ft_d_four_head(d_4, a_4.order[0]);
	while (d_4)
	{
		while (d_4)
		{
			while (d_4)
			{
				while (d_4)
				{
					// if (!d_4->connect1_p && d_4->d_3->connect1_p)
					// 	printf("1_p null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect1_m && d_4->d_3->connect1_m)
					// 	printf("1_m null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect2_p && d_4->d_3->connect2_p)
					// 	printf("2_p null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect2_m && d_4->d_3->connect2_m)
					// 	printf("2_m null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect3_p && d_4->d_3->connect3_p)
					// 	printf("3_p null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect3_m && d_4->d_3->connect3_m)
					// 	printf("3_m null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect4_p)
					// 	printf("4_p null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (!d_4->connect4_m)
					// 	printf("4_m null : [%d][%d][%d][%d]\t\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					// if (d_4->connect1_p)
					// 	d_4 = d_4->connect1_p;
					// else
					// 	break;
					//if (d_4->coordinate_1 != d_4->d_3->coordinate_1 && d_4->coordinate_2 != d_4->d_3->coordinate_2 && d_4->coordinate_3 != d_4->d_3->coordinate_3)
					printf("[%d][%d][%d][%d]\t",d_4->coordinate_1, d_4->coordinate_2, d_4->coordinate_3, d_4->coordinate_4);
					if (d_4->connect1_p)
						d_4 = d_4->connect1_p;
					else
						break;
				}
				d_4 = d_4->head1;
				printf("\n");
				if (d_4->connect2_p)
					d_4 = d_4->connect2_p;
				else
					break;
			}
			d_4 = d_4->head2;
			printf("\n");
			if (d_4->connect3_p)
				d_4 = d_4->connect3_p;
			else
				break;
		}
		d_4 = d_4->head3;
		d_4 = d_4->connect4_p;
		printf("\n");
	}



	return (1);
}