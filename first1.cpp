#include<stdio.h> 
#include<iostream>
#include<windows.h>
using namespace std; 
int main() 
{ 
        system("cls");
		cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;





        cout<<"\t\t####################################################################################################################################"<<endl;
		cout<<"\t\t      ****** ******* ****** ******* ******* ********* ******* *      * ******      ******* *   * ******* ******** ****** *    *     "<<endl;
		cout<<"\t\t      *    * *     * *      *     * *     *     *        *    **     * *           *        * *  *           *    *      **  **       "<<endl;
		cout<<"\t\t      *    * ******* ****** ******* *******     *        *    *  *   * * ****      *******   *   *******     *    ****** *  * *     "<<endl;
		cout<<"\t\t      *    * *       *      *   *   *     *     *        *    *    * * *    *            *   *         *     *    *      *    *        "<<endl;
		cout<<"\t\t      ****** *       ****** *    *  *     *     *     ******* *      * ******      *******   *   *******     *    ****** *    *     "<<endl;
		cout<<"\t\t####################################################################################################################################"<<endl;
        getchar();
		system("color 2");
		Sleep(1000);
		system("color 3");
		Sleep(1000);
		system("color 4");
		Sleep(1000);
		system("color 0a");

      int i, limit, total = 0, x, counter = 0, time_quantum; 
      int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10]; 
      float average_wait_time, average_turnaround_time;
      cout<<("\n\t\t\t\t\tEnter Total Number of Processes:\t"); 
      cin>>limit; 
      x = limit; 
      for(i = 0; i < limit; i++) 
      {
            cout<<("\n\t\t\t\t\tEnter Details of Process\n");
            cout<<"\t\t\t\t\t"<<(i+1)<<"  "<<"Arrival Time:  ";
            cin>>arrival_time[i];
            cout<<"\t\t\t\t\t"<<(i+1)<<"  "<<"Burst Time:\t";
            cin>>burst_time[i]; 
            temp[i] = burst_time[i];
      } 
      cout<<("\n\t\t\t\t\tEnter Time Quantum:\t"); 
      cin>>time_quantum; 
      cout<<("\n\t\t\t\t\tProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total = 0, i = 0; x != 0;) 
      { 
            if(temp[i] <= time_quantum && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0; 
                  counter = 1; 
            } 
            else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - time_quantum; 
                  total = total + time_quantum; 
            } 
            if(temp[i] == 0 && counter == 1) 
            { 
                  x--; 
                  cout<<"\n\t\t\t\t\tProcess"<<(i+1)<<"\t\t"<<burst_time[i]<<"\t\t\t"<<total - arrival_time[i]<<"\t\t\t"<<total - arrival_time[i] - burst_time[i]; 
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i]; 
                  turnaround_time = turnaround_time + total - arrival_time[i]; 
                  counter = 0; 
            } 
            if(i == limit - 1) 
            {
                  i = 0; 
            }
            else if(arrival_time[i + 1] <= total) 
            {
                  i++;
            }
            else 
            {
                  i = 0;
            }
      } 
      average_wait_time = wait_time * 1.0 / limit;
      average_turnaround_time = turnaround_time * 1.0 / limit;
        cout<<endl;
        cout<<endl;
        Sleep(1000);
        system("color 4");
		Sleep(1000);
      printf("\n\n\t\t\t\t\t\t\tAverage Waiting Time:\t%f", average_wait_time); 
      printf("\n\t\t\t\t\t\t\tAvg Turnaround Time:\t%f\n", average_turnaround_time); 
      return 0; 
}
