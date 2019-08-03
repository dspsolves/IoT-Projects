//Collects Data From Bolt WiFi Module Every 5 Minutes
//Uses Google Data Visualization Libraries
mul(1/10.24);
setChartLibrary('google-chart');
setChartTitle('Temperature Prediction System');
setChartType('predictionGraph');
//setChartType('lineGraph');
setAnimation(true);
setCrosshair(true);
setAxisName('Time','Temperature');
plotChart('time_stamp','temp');