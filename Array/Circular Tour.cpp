int tour(petrolPump p[],int n)
    {
       int fuel = 0;
       int fuel_Deficiency = 0;
       int car_Position = 0;
       for (int i = 0; i<n; i++) {
           fuel += p[i].petrol-p[i].distance;
           if (fuel<0) {
               fuel_Deficiency+=fuel;
               car_Position = i+1;
               fuel=0;
           }
       }
       if (fuel+fuel_Deficiency>=0) return car_Position;
       else return -1;
    }